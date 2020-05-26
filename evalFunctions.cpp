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

#define rep(i,a,b) for (auto i = a; i < b; i++)
//#define bitset<n> b<n>

/* typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set; */

//indexed_set s;
	//s.insert(2);
	//s.insert(3);
	//s.insert(7);
	//s.insert(9);

	//auto x = s.find_by_order(2);
	//s.order_of_key(7)
	
	//c_p_c();

	//__builtin_clz(x): the number of zeros at the beginning of the number
   // __builtin_ctz(x): the number of zeros at the end of the number
   // __builtin_popcount(x): the number of ones in the number
   // __builtin_parity(x): the parity (even or odd) of the number of ones

void c_p_c()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll binary_exponentiation(ll a, ll n){
	ll res=1;
	while(n){
		if(n%2){
			res = (res*a);
			n--;
		}else{
			a = (a*a);
			n/=2;
		}
	}
	return res;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	string str;
	cin>>str;

	ll ans = 3*binary_exponentiation(str,2) - str + 10 + 4*binary_exponentiation(str,3) + 2*binary_exponentiation(str,2) - 5*str + 4;

	cout<<ans<<"\n";

	return 0;
	}



// import math
// str = int(input())

// print(int(3*int(math.pow(str,2)) - str + 10 + 4*int(math.pow(str,3)) + 2*int(math.pow(str,2)) - 5*str + 4))