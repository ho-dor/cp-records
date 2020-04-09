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
		int n,v;
		cin>>n;
		int even=0;
		int odd=0;
		for(int i=0;i<n;i++){
			//code
			cin>>v;
			if(v&1)
				odd++;
			else
				even++;
		}

		if((odd&1)||(even!=0 && odd%2==0 && odd!=0))
			cout<<"YES"<<"\n";
		else{
			cout<<"NO\n";
		}



	}

	return 0;
	}

		