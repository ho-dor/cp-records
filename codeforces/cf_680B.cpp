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

	 int n,a;
	 cin>>n>>a;
	 vector<int> v(n);

	 for(int i=0;i<n;i++){
	 	cin>>v[i];
	 }

	 int i=a-1;
	 int j=a-1;

	 int count=0;

	 while(i>=0 && j<n){
	 	
	 	if(v[i]==1 && v[j]==1 && i!=j)
	 		count+=2;
	 	else if(v[i]==1 && v[j]==1)
	 		count++;

	 	i--;j++;
	 }

	 if(i<0 && j<n){
	 	for(int k=j;k<n;k++){
	 		if(v[k]==1)
	 			count++;
	 	}
	 }
	 else if(i>=0 && j==n){
	 	for(int k=i;k>=0;k--){
	 		if(v[k]==1)
	 			count++;
	 	}
	 }
	
	cout<<count;

	return 0;
	}

		