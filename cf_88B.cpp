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

double dist(pair<ll,ll> p1, pair<ll,ll> p2){

	cout<<sqrt((p1.f-p2.f)*(p1.f-p2.f) + (p1.s-p2.s)*(p1.s-p2.s))<<" ";

	double ans = sqrt((p1.f-p2.f)*(p1.f-p2.f) + (p1.s-p2.s)*(p1.s-p2.s));

	return ans;

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n,m,x;
	cin>>n>>m>>x;

	vector<pair<ll,ll>> v(26,make_pair(0,0));
	
	char val;

	pair<ll,ll> ps = make_pair(0,0);

	rep(i,1,n+1){
		
		rep(j,1,m+1){
			
			cin>>val;

			if(val=='S'){
				ps=make_pair(i,j);
			}
			else{
				v[val-'a'] = make_pair(i,j);
			}
			
		}
	}

	ll len;
	cin>>len;

	string str;
	cin>>str;

	ll count=0;

	rep(i,0,len){

		if(str[i]>=65 && str[i]<=90){

				if(ps.f !=0 || ps.s != 0){

					if(v[(str[i]+32)-'a'].f !=0 || v[(str[i]+32)-'a'].s != 0){
						
						if( dist(ps,v[(str[i]+32)-'a']) > x) count++;
						
						}else{
						
							cout<<-1;
							return 0;
						
						}
				
				}else{

					cout<<-1<<"\n";
					return 0;
				
				}
			
			}else{
				
				if(v[str[i]-'a'].f ==0 && v[str[i]-'a'].s == 0){
					
					cout<<-1<<"\n";
					return 0;
				
				}		
			}
	}

	cout<<count<<"\n";

	return 0;
	}

		