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

	int n,k,val;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	int count=0;

	for(int i=0;i<k;i++){
		if(v[i]>0){
			count++;
		}
		//cout<<i<<" ";
	}
	for(int i=k;i<n;i++){
		if(v[i]!=v[k-1]){
			break;
		}else{
			if(v[k-1])
			count++;
			//cout<<v[i]<<" ";
		}
		//cout<<i<<" ";	
	}

	cout<<count<<'\n';

	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

