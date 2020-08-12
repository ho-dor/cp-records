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
	if(n==2){cout<<"NO"; return 0;}
	if(n&1)
		cout<<"NO";
	else
		cout<<"YES";
	
	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		