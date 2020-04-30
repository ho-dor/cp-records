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

pair<ll,pair<ll,ll>> p[100001];
ll dsu[100001],n,m,minimum;

ll root(ll x){

	while(dsu[x]!=x)
	{

		dsu[x]=dsu[dsu[x]];
		x = dsu[x];
	}

	return x;
}

void union1(ll x, ll y){

	ll r1=root(x);
	ll r2=root(y);

	dsu[r1]=dsu[r2];
}

ll kruskal(auto p){

	rep(i,0,m){
		ll x = p[i].second.first;
		ll y = p[i].second.second;
		ll cost = p[i].first;

		if(root(x)!=root(y)){

			minimum+=cost;
			union1(x,y);
		}
	}
	return minimum;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin>>n>>m;

	rep(i,0,100001){
		dsu[i]=i;
	}
	
	rep(i,0,m){
		ll x,y,w;
		cin>>x>>y>>w;

		p[i] = make_pair(w,make_pair(x,y));

	}

	sort(p,p+m);

	minimum = kruskal(p);
	cout<<minimum;

	return 0;
	}

		