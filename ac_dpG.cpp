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

int MAX = 100005;

std::vector<ll> edges[100005];
std::vector<ll> dist(MAX,0);
std::vector<ll> indegree(MAX,0);
std::vector<bool> visited(MAX,false);


void dfs(ll i){
	visited[i]=true;
	for(ll c: edges[i]){
		dist[c] = max(dist[c], dist[i]+1);
		--indegree[c];
		if(!indegree[c]){
			dfs(c);
		}
	}
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll n,m;
	cin>>n>>m;

	while(m--){
		ll a,b;
		cin>>a>>b;
		edges[a].pb(b);

		indegree[b]++;
	}

	rep(i,1,n+1){
		if(!visited[i] && !indegree[i]){
			dfs(i);
		}
	}

	ll res=0;
	rep(i,1,n+1){
		res = max(res,dist[i]);
	}

	cout<<res;

	return 0;
	}

		