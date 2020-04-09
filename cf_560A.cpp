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

	int n,v; bool one=false;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v;
		if(v==1)
			one=true;
	}

	if(one)
		cout<<-1;
	else
		cout<<1;
	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		