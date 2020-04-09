#include<bits/stdc++.h>
using namespace std;

#define ll  long long

int main(){
	
	//c_p_c();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n,m,v;
	cin>>n;
	unordered_map<int,int> ma;

	for(int i=0;i<n;i++){
        cin>>v;
        ma[v]=i+1;
	}
	int q; ll vasya=0,petya=0;
	cin>>m;
	while(m--){
		cin>>q;
		
		vasya += ma[q];
		petya += n-ma[q]+1; 
	}

	cout<<vasya<<" "<<petya;

	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		