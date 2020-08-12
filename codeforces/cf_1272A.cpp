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
		
		std::vector<ll> v;

		ll a,b,c;
		cin>>a>>b>>c;

		v.pb(a);
		v.pb(b);
		v.pb(c);

		sort(v.begin(),v.end());

		//cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";

		if(v[0]<v[1]){
			v[0]+=1;
		}

		else if(v[0]==v[1] && v[1]<v[2]){
			v[0]+=1;
			v[1]+=1;
		}

		if(v[1]<v[2]){
			v[2]-=1;
		}
	
		else if(v[1]==v[2] && v[1]>v[0]){
			v[1]-=1;
			v[2]-=1;
		}

		//cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";

		cout<<abs(v[0]-v[1])+abs(v[1]-v[2])+abs(v[0]-v[2])<<"\n";
	}


	return 0;
	}

		