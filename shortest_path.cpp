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
//typedef queue<ll> q;
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

std::vector<ll> dist(1001,-1);
std::vector<bool> visited(1001,false);
std::vector<ll> v[1001];
queue<ll> q;


void bfs(ll source){
	dist[source]=0;
	visited[source]=true;
	
	q.push(source);

	while(!q.empty()){

		ll prev = q.front();
		q.pop();

		for(ll c: v[prev]){

			if(!visited[c]){

				dist[c]=dist[prev]+6;
				q.push(c);
				visited[c]=true;

			}
		}
	}
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		
		rep(i,0,m){
			ll a,b;
			cin>>a>>b;
			v[a].pb(b);
			v[b].pb(a);
		}

		ll source;
		cin>>source;

		bfs(source);

		rep(i,1,n+1){
			if(i!=source)
				cout<<dist[i]<<" ";
		}

		cout<<"\n";

		rep(i,1,n+1){
			v[i].clear();
		}
		fill(dist.begin(),dist.end(),-1);
		fill(visited.begin(),visited.end(),false);

	}

	return 0;
	}

		