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

	
	ll n,k,val;
	cin>>n>>k;

	vector<pair<ll,ll>> v(n);

	rep(i,0,n){
		cin>>val;

		v[i] = make_pair(val,i+1);
	}

	sort(v.begin(),v.end());

	// rep(i,0,n){
	// 	cout<<v[i]<<" ";
	// }

	ll i=0,j=n-1;

	while(i<j){

		if(v[i].f + v[j].f == k){
			if(v[i].s<v[j].s)
				cout<<v[i].s<<" "<<v[j].s<<"\n";
			else
				cout<<v[j].s<<" "<<v[i].s<<"\n";
			return 0;
		
		}

		if(v[i].f + v[j].f < k){
			
			i++;
		}

		else if(v[i].f + v[j].f > k){
			
			j--;
		}

	}

	cout<<"IMPOSSIBLE\n";

	return 0;
	}

		