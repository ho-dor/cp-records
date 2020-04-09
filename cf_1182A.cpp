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

	int n;
	cin>>n;

	if(n==2){
		cout<<2;
		return 0;
	}
	if(n==4){
		cout<<4;
		return 0;
	}

	vector<ll> v(n+1,0);
	v[2]=2;
	v[4]=4;

	if(n&1)
		cout<<0;
	else{
		if(n>=6){
			for(int i=6;i<=n;i+=2){
			v[i] = v[i-2]*v[2];
			}
		}
		
		cout<<v[n];
	}

	return 0;
	}

		