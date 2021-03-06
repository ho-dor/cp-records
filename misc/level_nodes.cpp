#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>

//using namespace __gnu_pbds;

using namespace std;

#define ll  long long

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unordered_map<int,int> um;
typedef unordered_set<int> us;
typedef priority_queue<int> pq;
typedef deque<int> dq;
typedef queue<int> q;
typedef stack<int> st;

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define rep(i,a,b) for (auto i = a; i < b; i++)
//#define bitset<n> b<n>

/* typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set; */

//indexed_set s;
	//s.insert(2);
	//s.insert(3);
	//s.insert(7);
	//s.insert(9);

	//auto x = s.find_by_order(2);
	//s.order_of_key(7)
	
	//c_p_c();

	//__builtin_clz(x): the number of zeros at the beginning of the number
   // __builtin_ctz(x): the number of zeros at the end of the number
   // __builtin_popcount(x): the number of ones in the number
   // __builtin_parity(x): the parity (even or odd) of the number of ones

void c_p_c()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<bool> visited(100001,false);
vector<ll> level(100001);

void bfs(auto v, ll s,ll x,auto level){
	queue<ll> q;
	
	q.push(s);
	visited[s]=true;
	level[1]=1;

	while(!q.empty()){

		ll i = q.front();
		q.pop();
		
		for(auto c: v[i]){
			if(!visited[c]){
				level[c]=level[i]+1;
				q.push(c);
				visited[i]=true;
			}
		}
	}
	ll count=0;
	for(auto i=0;i<level.size();i++){
		if(level[i]==x)
			count++;
	}
	cout<<count;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n;
	cin>>n;
	vector<ll> v[n+1];
	vector<ll> level(n+1);
	n--;
	while(n--){
		ll a,b;
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}

	ll x;
	cin>>x;

	bfs(v,1,x,level);
	
	return 0;
	}

		