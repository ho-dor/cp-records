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

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll t;
	cin>>t;
	while(t--){

		ll n;

		int a[3];

		cin>>a[0]>>a[1]>>a[2]>>n;

		sort(a,a+3);

		bool val = n < (2*a[2]-a[1]-a[0]) ? true: false;

		bool val2 =  (n - (2*a[2] - a[1] - a[0]))%3==0 ? true:false;

		if(val){
			cout<<"NO\n";
		}

		else if(val2){
			cout<<"YES\n";

		}
		else{
			cout<<"NO\n";
		}

	}

	return 0;
	}

		