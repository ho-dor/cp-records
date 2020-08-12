#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>

//using namespace __gnu_pbds;

using namespace std;

#define ll  long long

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unordered_map<int,int> um;
typedef unordered_set<int> us;
typedef priority_queue<int> pq;
typedef deque<int> dq;
typedef queue<int> q;
typedef stack<int> st;

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define rep(i,a,b) for (auto i = a; i < b; i++)

void c_p_c()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll numberOfCoPrime(vector<ll> v){

	ll count=0;
	ll len = v.size();

	rep(i,0,len){
		rep(j,i+1,len){
			if(__gcd(v[i],v[j])==1)
				count++;
		}
	}
	return count;
}

int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
  
int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	ll t;

	while(true){
		
		cin>>t;

		if(!t)
			return 0;

		vector<ll> v(t);

		rep(i,0,t){
			cin>>v[i];
		}

		ll count = numberOfCoPrime(v);

		if(count==0){
			cout<<"No estimate for this data set.";
		}else{
			
			double ans = 6*nCr(t,2)/count;

			cout<<sqrt(ans)<<"\n";
		}
	
	}

	return 0;
	}

		