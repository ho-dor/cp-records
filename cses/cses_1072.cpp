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

#define rep(i,a,b) for (int i = a; i <= b; i++)

void c_p_c()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll solve(ll n){

	if(n==1)
		return 0;
	if(n==2)
		return 6;
	
	ll total = (n*n)*((n*n)-1);

	ll ans = total/2 - 4*(n-2)*(n-1); 

	return ans;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n;
	cin>>n;

	for(ll i=1;i<=n;i++){

		cout<<solve(i)<<"\n";
	
	}

	return 0;
	}

		