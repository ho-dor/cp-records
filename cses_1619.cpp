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

	
	ll t;
	cin>>t;

	std::vector<ll> v1;
	std::vector<ll> v2;

	ll temp = t;

	rep(i,0,t){

		ll a,b;
		cin>>a>>b;

		v1.pb(a);
		v2.pb(b);

	}


	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());

	ll i=0,j=0;
	
	ll count=0; ll max=0;
	
	while(i<t && j<t){

		if(v1[i]<v2[j]){
			count++; 

			if(max<count){
				max=count;
			}
   
			i++;
		}

		else if(v1[i]>v2[j]){
			count--;

			if(max<count){
				max=count;
			}

			j++;
		}

		else{

			i++;
			j++;
		
		}

	}

	if(i<t){
		count += t-i;
	}else if(j<t){
		count -= t-j;
	}

	if(max<count){
		max=count;
	}

	cout<<max<<"\n";

	return 0;
	}

		