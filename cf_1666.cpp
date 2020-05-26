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

void c_p_c()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<ll> adj[100005];
bool visited[1000005];

void dfs(ll i){
	if(visited[i])return;

	visited[i]=true;

	for(auto c: adj[i]){
		if(!visited[c])
			dfs(c);
	}
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll n,m;
	cin>>n>>m;

	rep(i,0,m){

		ll a,b;

		cin>>a>>b;

		adj[a].pb(b);
		adj[b].pb(a);

	}

	vector<int> b;

	visited[0]=true;

	dfs(1);

	rep(i,2,n+1){

		if(!visited[i]){
			b.pb(i);
			dfs(i);
		}

	}

	cout<<b.size()<<"\n";

	rep(i,0,b.size()){
		cout<<1<<" "<<b[i]<<"\n";
	}

	return 0;
	}

		