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

	
	ll n,w;
	cin>>n>>w;

	std::vector<ll> v(n);

	rep(i,0,n){
		cin>>v[i];
	}

	sort(v.begin(),v.end()); // binary-search

	ll start=0;
	ll end = n-1;

	ll c=0;

	while(start<=end){

		if(v[start]+v[end]>w)
			end--;
		else{
			start++;
			end--;
		}
		c++;
	}

	cout<<c<<"\n";

	return 0;
	}

		