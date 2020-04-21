#include<bits/stdc++.h>
#define int long long
#define double long double
#define vi vector<int>
#define vpi vector<pair<int,int> >
#define mii map<int,int>
#define mpi map<pair<int,int>,int>
#define msi map<string,int>
#define set set<int>
#define u_set unordered_set<int>
#define pb push_back
#define M 1000000007
#define endl "\n"
#define BRISK ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
vi adj[2001], visited(2001,0), depth(2001,0);
 
void dfs(int i,int p)
{
  visited[i] = true;
  depth[i] = depth[p]+1;
  for(auto j:adj[i]){
    if(!visited[j])dfs(j,i);
  }
}
 
signed main()
{
  BRISK;
  int n;
  cin>>n;
  vi root;
 
  int x;
  for(int i=1;i<=n;i++){
    cin>>x;
    if(x==-1){
      root.pb(i);
      continue;
    }
    adj[x].pb(i);
  }
 
  int ans = 0;
  for(int i=0;i<(int)root.size();i++){
    dfs(root[i],0);
    int Max = INT_MIN;
    for(int j=1;j<=n;j++){
      if(visited[j])Max = max(Max,depth[j]);
    }
    ans = Max;
  }
 
 
  cout<<ans;
}