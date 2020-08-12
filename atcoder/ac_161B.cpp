#include<bits/stdc++.h>
using namespace std;


int main(){
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n,m,sum=0;
	cin>>n>>m;

	vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}


	int count=0;

	for(int i=0;i<n;i++){
		
		if(v[i]*(4*m) >= sum)
			count++;
	
	}

	if(count>=m)
		cout<<"Yes";
	else
		cout<<"No";

	return 0;
	}

		