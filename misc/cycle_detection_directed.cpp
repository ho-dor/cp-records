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


vector<int> visited(100005);
vector<int> graph[100005];
vector<int> st(100005);

bool dfs(int node,bool res){

	visited[node]=true;
	st[node]=true;

	for(auto i: graph[node]){

		if(!visited[i]){
			res = dfs(i,res);
			if(res)
				return true;
		}
		else if(st[i]){
			res=true;
			return res;
		}
	
	}

	st[node]=false;
	return res;

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	int n,m;
	cin>>n>>m;

	for(int i=0;i<m;i++){

		int a,b;
		cin>>a>>b;

		graph[a].pb(b);

	}

	cout<<dfs(0,false);


	return 0;
	
	}

		