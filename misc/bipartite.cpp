#include<bits/stdc++.h>

using namespace std;

#define ll  long long

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
vector<int> visited(10005);
bool odd_cycle=0;

void dfs(int node,int parent,int col){

	visited[node]=col;

	for(auto i: graph[node]){
		
		if(!visited[i]){

			dfs(i,node,3-col);

		}
		
		else if(i != parent && visited[i]==col){
			odd_cycle=1;
		}
	
	}
	return;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	int n,m,a,b;
	cin>>n>>m;

	for(int i=0;i<m;i++){
	
		cin>>a>>b;

		graph[a].pb(b);
		graph[b].pb(a);
	
	}

	dfs(1,1,1);

	if(odd_cycle)
		cout<<"Not Bipartite";
	else
		cout<<"Bipartite";

	return 0;
	}

		