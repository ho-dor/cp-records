#include<bits/stdc++.h>

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

	std::vector<ll> home;
	std::vector<ll> away;
	ll temp=t;

	while(temp--){

		ll a,b;
		cin>>a>>b;

		home.pb(a);
		away.pb(b);
	}

	ll cnt=0;

	rep(i,0,t){
		rep(j,0,t){
			if(i!=j && home[i]==away[j]){
				cnt++;
			}
		}
	}

	cout<<cnt;

	return 0;
	
	}

		