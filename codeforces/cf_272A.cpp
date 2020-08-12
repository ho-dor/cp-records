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

	int n,v;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>v;
		sum+=v;
	}

	int ans=0;
	for(int i=1;i<6;i++){
		int val = sum+i;
		if(val%(n+1)!=1)
			ans++;
	}

	cout<<ans;
	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		