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


int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n;
	cin>>n;

	std::vector<ll> v(n);

	rep(i,0,n){

		cin>>v[i];
	
	}

	multiset<ll> s;

	s.insert(v[0]);
	ll count=1;

	rep(i,1,n){

		auto it = s.upper_bound(v[i]);

		if(it!=s.end()){

			s.erase(it);
			s.insert(v[i]);
		
		}
		
		else{
		
			s.insert(v[i]);
			count++;
		}

	}

	cout<<count<<"\n";
	

	return 0;
	}

		