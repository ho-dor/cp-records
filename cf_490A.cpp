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

	std::vector<ll> one;
	std::vector<ll> two;
	std::vector<ll> three;
	std::vector<ll> v;
	ll n,val;
	cin>>n;

	rep(i,0,n){
		cin>>val;
		v.pb(val);

		switch(val){

			case 1: one.pb(i+1); 
			break;
		
			case 2: two.pb(i+1);
			break;
		
			case 3: three.pb(i+1);
			break;
		
		}
	}

	ll ans = min(count(v.begin(),v.end(),1),min(count(v.begin(),v.end(),2),count(v.begin(),v.end(),3)));

	cout<<ans<<"\n";

	int i=0;
	while(ans--){

		cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<"\n";
		i++;
	}

	return 0;
	}

		