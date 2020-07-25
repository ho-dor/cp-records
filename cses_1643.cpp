#include<iostream> 
#include<climits> 
using namespace std; 

#define ll long long

ll maxSubArraySum(ll a[], ll size) 
{ 
	ll max_so_far = INT_MIN, max_ending_here = 0; 

	for (int i = 0; i < size; i++) 
	{ 
		max_ending_here = max_ending_here + a[i]; 
		if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 

		if (max_ending_here < 0) 
			max_ending_here = 0; 
	} 
	return max_so_far; 
} 

int main() 
{ 
	ll n;
	cin>>n;
	
	ll v[n];

	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	
	ll max_sum = maxSubArraySum(v, n); 
	cout <<max_sum; 
	return 0; 
} 
