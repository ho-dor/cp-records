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
	ll temp = t;
	std::vector<pair<ll,ll>> v;

	while(temp--){
	
		ll a,b;
		cin>>a>>b;

		v.pb(make_pair(a,b));
	
	}

	rep(i,0,t){
	
		if((v[i].f)!= (v[i].s)){
	
			cout<<"rated\n";
			return 0;
	
		}
	
	}

	if(is_sorted(v.rbegin(),v.rend())){
	
		cout<<"maybe\n";
	
	}
	else{
	
		cout<<"unrated\n";
	
	}

	return 0;
	}

		