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

	
	std::vector<string> v = {"ABC","ACB","BCA","BAC","CAB","CBA"};
	string a,b,c;
	cin>>a>>b>>c;

	char v1,v2,v3,v4,v5,v6;

		if(a[1]=='<'){
			v1=a[0];
			v2=a[2];
		}else if(a[1]=='>'){
			v1=a[2];
			v2=a[0];
		}

		if(b[1]=='<'){
			v3=b[0];
			v4=b[2];
		}else  if(b[1]=='>'){
			v3=b[2];
			v4=b[0];
		}

		if(c[1]=='<'){
			v5=c[0];
			v6=c[2];
		}else  if(c[1]=='>'){
			v5=c[2];
			v6=c[0];
		}

		//cout<<v1<<" "<<v2<<" "<<v3<<" "<<v4<<" "<<v5<<" "<<v6<<"\n";

		rep(i,0,6){
			size_t i1 = v[i].find(v1,0);
			size_t ii = v[i].find(v2,0);
			size_t iii = v[i].find(v3,0);
			size_t iiii = v[i].find(v4,0);
			size_t iiiii = v[i].find(v5,0);
			size_t iiiiii = v[i].find(v6,0);

			//cout<<v[i]<<" : "<<i1<<" "<<ii<<" "<<iii<<" "<<iiii<<" "<<iiiii<<" "<<iiiiii<<"\n";

			if(i1<ii && iii<iiii && iiiii<iiiiii){
				cout<<v[i];
				return 0;
			}
		}

		cout<<"Impossible";

	return 0;
	}

		