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


vector<int> v(4001,INT_MIN);
 
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
 
    
    int mval;
    v[a]=1;v[b]=1;v[c]=1;
    for(int i=0;i<=n;i++)
    {
        mval=INT_MIN;
        if(i-a >= 0)
        mval=max(mval,v[i-a]+1);
        if(i-b >= 0)
        mval=max(mval,v[i-b]+1);
        if(i-c >= 0)
        mval=max(mval,v[i-c]+1);
 
        v[i]=max(mval,v[i]);
    }
 
    cout<<v[n]<<endl;
    
}
		