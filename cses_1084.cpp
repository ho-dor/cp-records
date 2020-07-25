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

	
	ll n,m,k;
	cin>>n>>m>>k;

	std::vector<ll> nob(n);
	std::vector<ll> nor(m);

	rep(i,0,n){
		cin>>nob[i];
	}

	rep(i,0,m){
		cin>>nor[i];
	}

	ll i=0,j=0;
	
	ll count=0;

	sort(nob.begin(),nob.end());
	sort(nor.begin(),nor.end());  //what an idiot. 

	while(i<n && j<m){

		if(nob[i]-k<=nor[j] && nob[i]+k>=nor[j]){

			count++;
			i++;j++;

		}

		else if(nob[i]-k>nor[j]){

			j++;

		}

		else if(nob[i]+k<nor[j]){

			i++;

		}

	}

	cout<<count<<"\n";

	return 0;
	}

		