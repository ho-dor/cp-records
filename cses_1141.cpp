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

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll n,val;
	cin>>n;
	
	vector<ll> v(n);

	rep(i,0,n){
	
		cin>>v[i];
	
	}

	map<ll,ll> mp;
	int ans=0;

	for(int i=0,j=0;i<n;i++){
		
		while(j<n && mp[v[j]]<1){

			mp[v[j]]++;
			++j;
		
		}
	  
	  ans = max(j-i , ans);
	  mp[v[i]]--;

	}

	cout<<ans;
	

	return 0;
	}

		