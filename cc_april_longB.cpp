#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(){
	
	//c_p_c();

	
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}

		sort(v.begin(),v.end(), greater<int>());

		ll sum=0;

		for(int i=0;i<n;i++){
			if((v[i]-i)>0)
				sum+=v[i]-i;
		}

		cout<<(sum%1000000007)<<'\n';
	}

	

	return 0;
	}

		