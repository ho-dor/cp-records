#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>

//using namespace __gnu_pbds;

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

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll t;
	cin>>t;
	while(t--){

		ll n;
		cin>>n;
		
		std::vector<ll> res;
		
		ll i=2;

		ll temp = n;

		while(i<=temp/2 && n>=2){

			if(n%i==0){



				res.pb(i);
				n = n/i;

			}

			if(res.size()==2 && find(res.begin(),res.end(),n)==res.end() && n>=2){
				res.pb(n);
				break;
			}

			i++;

		}

		if(res.size()!=3){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
			for(int i=0;i<3;i++){
				cout<<res[i]<<" ";
			}
			cout<<"\n";
		}

	}

	return 0;
	}

		