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

	string str;
	cin>>str;
	
	 ll len=str.length();
	 ll i=1;
	 
	 string res;
	 char start;

	 if(len&1)
	 	start='b';
	 else
	 	start='e';

	 res += str[0];

	 while(i<len){

	 	if(start=='b'){
	 		res.insert(0,1,str[i]);
	 		start='e';
	 	}else{
	 		res+=str[i];
	 		start='b';
	 	}

	 	i++;
	 }

	 cout<<res;

	return 0;
	}

		