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

ll MAX = 1e5+5;

vector<int> v(MAX,1);

void sieve(){
	  
	  v[0] = 0;
	  v[1] = 0;

	  for(int i=2;i*i<=MAX;i++){
	  		if(v[i]){
	  			for(int j=i*i;j<=MAX;j+=i){
	      			v[j]=0;
	   			 }
	  		}
	  
	  }
}



bool isPrime(ll n){
	if(v[n]==1){
		return true;
	}
	return false;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	sieve();
	
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;

		if(sqrt(n)==floor(sqrt(n))){
			
			if(isPrime(sqrt(n))){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		
		}

		else{
			cout<<"NO\n";
		}
	}

	return 0;
}

		