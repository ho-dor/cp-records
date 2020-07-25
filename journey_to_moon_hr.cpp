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

std::vector<ll> v[10005];
std::vector<bool> visited(10005,false);

void dfs(ll node,ll &ans){

	visited[node]=true;
	
	for(auto c:v[node]){
	
		if(!visited[c]){
			ans++;
			dfs(c,ans);
	
		}
	
	}

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll m,n;

	cin>>n>>m;

	ll a,b;

	for(int i=0;i<m;i++){

		cin>>a>>b;

		v[a].pb(b);
		v[b].pb(a);

	}

	ll total = (n*(n-1))/2;

	ll ans=1;

	dfs(0,ans);

	total -= (ans*(ans-1))/2;

	for(int i=0;i<n;i++){

		if(!visited[i]){
		
			ans=1;
			dfs(i,ans);
			total -= (ans*(ans-1))/2;; 
		
		}
	
	}

	cout<<total<<"\n";

	return 0;
	}

		