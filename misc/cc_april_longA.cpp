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
		int n;
		cin>>n;
		int prev=-1,curr;
		bool b = true;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		for(int i=0;i<n;i++){
			if(v[i]==1)
				curr=i;
			else
				continue;

			if(curr-prev<6 && prev!=-1){
				b = false;
				cout<<"NO\n";
				break;
			}else{
				prev = i;
			}
		}
		
		if(b)
			cout<<"YES\n";
	}

	return 0;
	}

		