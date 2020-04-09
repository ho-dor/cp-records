#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
}

int main(){
	
	c_p_c();

	
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a==b){
			cout<<0<<'\n';
		}
		else if(abs(a-b)%2!=0 && a-b>0)
			cout<<2<<'\n';
		else if(abs(a-b)%2!=0)
			cout<<1<<'\n';
		else if(abs(a-b)%2==0 && a-b>0)
			cout<<1<<'\n';
		else
			cout<<2<<'\n';

	}

	return 0;
	}

		