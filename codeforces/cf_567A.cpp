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

	
	ll n;
	cin>>n;
	std::vector<ll> v(n);
	
	rep(i,0,n){
	
		cin>>v[i];
	
	}

	cout<<v[1]-v[0]<<" "<<v[n-1]-v[0]<<"\n";

	rep(i,1,n-1){

		cout<<min(v[i]-v[i-1],v[i+1]-v[i])<<" "<<max(v[i]-v[0],v[n-1]-v[i])<<"\n";

	}

	cout<<v[n-1]-v[n-2]<<" "<<v[n-1]-v[0]<<"\n";

	return 0;
	}

		