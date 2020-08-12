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

#define rep(i,a,b)  for(auto i = a; i < b; i++)
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

	std::vector<ll> v(n);

	rep(i,0,n){
		cin>>v[i];
	}

	std::vector<ll> res(n);

	res[0] = 0;
	res[1] = abs(v[1]-v[0]);

		rep(i,2,n){
			res[i] = min((res[i-1]+abs(v[i]-v[i-1])),(res[i-2]+abs(v[i]-v[i-2])));
		}
	

	cout<<res[n-1];
	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		