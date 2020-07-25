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

	bool compare(pair<ll,ll> p1, pair<ll,ll> p2){

		return p1.s < p2.s;

	}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll t;
	cin>>t;
	
	ll temp=t;
	
	vector<pair<ll,ll>> v;

	while(temp--){
		
		ll a,b;
		cin>>a>>b;
		v.pb(make_pair(a,b));
	}

	sort(v.begin(),v.end(),compare);


	ll ed=v[0].s;
	ll count=1;
	ll i=1;

	while(i<t){
	
		if(v[i].f>=ed){

			count++;
			ed = v[i].s;
		
		}

		i++;
	
	}

	cout<<count<<"\n";

	return 0;
	}

		