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

	std::vector<ll> og(n+1);
	std::vector<ll> srtd(n+1);

	rep(i,1,n+1){
		cin>>og[i];
	}

	srtd = og;

	sort(srtd.begin(),srtd.end());

	vector<ll> prefix_og(n+1);
	std::vector<ll> prefix_srtd(n+1);

	prefix_og[1] = og[1];
	prefix_srtd[1] = srtd[1];

	prefix_og[0]=prefix_srtd[0]=0;

	rep(i,2,n+1){
		prefix_og[i] = og[i]+prefix_og[i-1];
	}

	rep(i,2,n+1){
		prefix_srtd[i] = srtd[i]+prefix_srtd[i-1];
	}

	ll t;
	cin>>t;
	while(t--){

		ll type,l,r;
		cin>>type>>l>>r;

		if(type==1){
			cout<<prefix_og[r]-prefix_og[l-1]<<"\n";
		}else{
			cout<<prefix_srtd[r]-prefix_srtd[l-1]<<"\n";
		}

	}

	return 0;
	}

		