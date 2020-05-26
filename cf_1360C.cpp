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
		
		vector<int> v(n);
		std::vector<ll> e;
		std::vector<ll> o;

		rep(i,0,n){

			cin>>v[i];

			if(v[i]&1){

				o.pb(v[i]);

			}else{

				e.pb(v[i]);

			}
		
		}

		string ans;

		int es = e.size();
		int os = o.size();

		vector<int>::iterator it1;
		vector<int>::iterator it2;

		if(es%2==0 && os%2==0){
			ans = "YES";
		}

		else{
			
			int count=0;

			rep(i,0,e.size()){

				it1 = find(v.begin(), v.end(), e[i]-1);
				it2 = find(v.begin(), v.end(), e[i]+1);
			
				if(it1!=v.end() || it2!=v.end()){

					count++;

				}
			
			}

			if(count!=0){
				ans = "YES";
			}
			else{
				ans = "NO";
			}
		}

		cout<<ans<<"\n";

	}


	return 0;
	}

		