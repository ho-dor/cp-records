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

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<bool> v(n+1,false);

		ll i=1;

		while(i<=n){

			ll j=1;
		
			while(j<=n){
			
				if(j%i==0){
			
					v[j]=!v[j];
				
				}
				
				j++;

			}
		
			i++;
		}

		ll count=0;

		rep(i,1,n+1){
			if(v[i])
				count++;
		}

		cout<<count<<"\n";
	}

	return 0;
	}

		