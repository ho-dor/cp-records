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
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//TODO
	
	ll t,v;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<int> a(n);
		vector<int> minE(n);
		vector<int> maxE(n);
		cin>>v;
		minE[0]=v;
		maxE[0]=v;
		a[0] = v;
		for(int i=1;i<n;i++){
			
			cin>>a[i];
			
			if(a[i]<minE[i-1])
				minE[i] = a[i];
			if(a[i]>maxE[i-1])
				maxE[i] = a[i];
		}


		ll v;
		cin>>v;

		if(v!=a[0]){
			cout<<"NO"<<'\n';
			int temp = n-1;
			while(temp--)
				cin>>v;
			continue;
		}else{
			int temp = n-1;
			int i=1;
			while(temp--){
				cin>>v;
				if(abs(v-a[i])>=minE[i])
			}
		}
	}

	return 0;
	}

		