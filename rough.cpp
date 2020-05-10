

#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
	
	bool isperfect(ll n){
		return (floor(sqrt(n))==sqrt(n));
	}
	

	// Driver code 
	int main() 
	{ 
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

		ll t;
		cin>>t;
		while(t--){
			ll n;
			cin>>n;
			
			ll low = floor(sqrt(n));
			ll high = low+1;

			if(isperfect(n)){
				low =sqrt(n)-1;
				high = sqrt(n)+1;
			}


			

			ll ud = n - (low*low);
			ll ld = (high*high)-n;

			(ud>=ld)? cout<<high*high:cout<<low*low;

			cout<<"\n";
		}
	} 