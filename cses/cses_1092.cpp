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

#define rep(i,a,b) for (int i = a; i <= b; i++)
//#define bitset<n> b<n>

/* typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set; */

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

	ll sum = n*(n+1)/2;

	std::vector<ll> v1;
	std::vector<ll> v2;

	if(sum&1)
		cout<<"NO";
	else{
		
		cout<<"YES\n";
		
		ll j=4;

		if(n%4)
			j=3;

		for(int i=0;i<(n-1)/4;i++){

			v1.pb(4*i+1+j);
			v1.pb(4*i+4+j);
			v2.pb(4*i+2+j);
			v2.pb(4*i+3+j);
		
		}

		if(n%4){
		
			v1.pb(1);
			v1.pb(2);
			v2.pb(3);
		
		}
		else{

			v1.pb(1);
			v2.pb(2);
			v2.pb(3);
			v1.pb(4);
		
		}

		cout<<v1.size()<<"\n";
		for(auto v: v1){
			cout<<v<<" ";
		}

		cout<<"\n";

		cout<<v2.size()<<"\n";
		for(auto v: v2){
			cout<<v<<" ";
		}

	}

	return 0;
	}

		