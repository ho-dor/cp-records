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

vector<ll> adj[100005];
vector<bool> visited[100005][100005];
vector<ll> dist(1000005,10e5);
vector<ll> path(1000005);

void dfs(ll i){
	if(visited[i])return;

	visited[i]=true;

	for(auto c: adj[i]){

		if(!visited[c]){
			dist[c] = min(dist[c],dist[i]+1);
			path[dist[c]]=c;
			dfs(c);
		}
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

	visited[0][1]=true;
	
	path[0]=1;
	dist[1]=0;
	dfs(1);

	if(!visited[n]){
		cout<<"IMPOSSIBLE\n";
		return 0;
	}

	cout<<dist[n]+1<<"\n";

	rep(i,0,dist[n]+1){
		cout<<path[i]<<" ";
	}

	cout<<"\n";

	return 0;
	}

		