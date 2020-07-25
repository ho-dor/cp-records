

#include<bits/stdc++.h> 
using namespace std; 

#define ll long long


	// Driver code 
	int main() 
	{ 
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		
		

		
		int num = 1;
		int n = floor(log2(num))+1;

		for(int i=0;i<n;i++){
			
			cout<<num<<" ";
			cout<<"\n";
			cout<<!(num&1)<<" ";
			num=num>>1;
			
		}
	} 