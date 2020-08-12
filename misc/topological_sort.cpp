#include<bits/stdc++.h>

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

void c_p_c()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<int> graph[10005];
vector<bool> visited(10005);
std::list<ll> lst;


void topo_sort(ll c){

	visited[c]=true;

	for(auto ch: graph[c]){

		if(!visited[ch]){
			
			topo_sort(ch);
		
		}

	}
	
	lst.push_front(c);

}

void dfs(ll i, ll n){

	visited[i]=true;

	for(int t=0;t<n;t++){
		if(!visited[t])
			topo_sort(t);
	}

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n,m;
	cin>>n>>m;

	
	ll a,b;

	for(int i=0;i<m;i++){
		
		cin>>a>>b;
		graph[a].pb(b);

	}

	dfs(0,n);
	
	cout<<0<<" ";

	 for (auto itr = lst.begin(); itr != lst.end(); itr++) 
        cout << *itr << " "; 

	return 0;
	
	}

		