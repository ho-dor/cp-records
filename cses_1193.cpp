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

char a[1001][1001];

bool visited[1000005];

vector<int> adj[1000005];

ll strt,e;

int dist[1000005];

int dfs(ll i){
	
	if(visited[i]) return 0;

	if(i==e){
		return dist[e];
	}
	
	visited[i]=true;

	for(auto e: adj[i]){
		dist[e] = dist[i]+1;
		dfs(e);

	}

	return 0;

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll n,m;
	cin>>n>>m;


	rep(i,0,n){
		rep(j,0,m){

			cin>>a[i][j];

				if(a[i][j]=='A'){
					strt = i*m+j;
				}

				else if(a[i][j]=='B'){
					e = i*m+j;
				}

		}
	}

	dist[strt] = 0;
	
		rep(j,0,n*m){
			visited[j]=false;
		}
	

	rep(i,0,n){

		rep(j,0,m){
		
			if(a[i][j]=='.' || a[i][j]=='A' || a[i][j]=='B'){

				if(j>0){
					if(a[i][j-1]=='.' || a[i][j]=='A' || a[i][j]=='B'){
						adj[i*m+j].pb(i*m+j-1);
					}
				}	
				
				if(i<n-1){
					if(a[i+1][j]=='.' || a[i][j]=='A' || a[i][j]=='B'){
						adj[i*m+j].pb((i+1)*m+j);
					}
				}

				if(i>0){
					if(a[i-1][j]=='.' || a[i][j]=='A' || a[i][j]=='B'){
						adj[i*m+j].pb((i-1)*m+j);
					}
				}
				
				if(j<m-1){
					if(a[i][j+1]=='.' || a[i][j]=='A' || a[i][j]=='B'){
						adj[i*m+j].pb(i*m+j+1);
					}
				}
				

			}

			else{
				visited[i*m+j]=true;
			}
		
		}
	
	}

	ll d = dfs(strt);

	cout<<d<<"\n";

	return 0;
	}