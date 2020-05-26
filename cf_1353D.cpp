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

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> a(n+1,0);

		ll fi=1,sj=n;

		ll mid = (fi+sj)/2;

		ll si = mid,fj=mid;

		ll i=n-1;

		a[mid]=1;

		fj-=1;
		si+=1;
		ll val=2;

		while(i--){

			ll left = fj-fi+1;
			ll right = sj-si+1;
			
			if(left<right){
			
				mid = (sj+si)/2;
			
				a[mid]=val;
			
				if(mid==si)
					si+=1;
				if(mid==sj)
					sj-=1;
			
			}else{

				mid = (fj-fi)/2;
			
				a[mid]=val;
			
				if(mid==fi)
					fi+=1;
				if(mid==fj)
					fj-=1;

			}

			val++;
		}

		rep(i,1,n+1){
			cout<<a[i]<<" ";
		}

		cout<<"\n";

	}

	return 0;
	}

		