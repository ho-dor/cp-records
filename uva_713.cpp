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

ll rev(ll a){

	ll reve=0;
	
	while(a>0){

		ll dig = a%10;
		reve = reve*10+dig;
		a = a/10;
	
	}
	
	return reve;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll t;
	cin>>t;

	while(t--){

		ll a,b;
		cin>>a>>b;

		a = rev(a);
		b = rev(b);
		ll s=a+b;
		
		cout<<rev(s)<<"\n"; 

	}

	return 0;
	}

		