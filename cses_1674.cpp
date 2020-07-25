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

vector<ll> cnt(200005,0);
vector<ll> v[200005];

void dfs(ll a,ll p){

	cnt[a]=1;
	for(auto s: v[a]){
		if(s==p)continue;
		dfs(s,a);
		cnt[a] += cnt[s];
	}

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll val,n;

	cin>>n;

	rep(i,2,n+1){

		cin>>val;

		v[val].pb(i);
	
	}

	dfs(1,0);

	rep(i,1,n+1){

		cout<<cnt[i]-1<<" ";

	}

	return 0;
	}

		