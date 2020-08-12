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

	ll index;
	ll min=INT_MAX;

	ll n,k;
	cin>>n>>k;

	std::vector<ll> v(n+1);

	rep(i,1,n+1){
		cin>>v[i];
	}
	ll sum=0;

	ll i = 1;
	ll j = k;

	rep(k,1,j+1){
		sum+=v[k];
	}

	min = sum;
	index = i;

	while(j<n){
		
		sum -= v[i];
		i++;
		j++;
		sum += v[j];

		if(sum<min){
			min = sum;
			index = i;
		}
	}

	cout<<index<<"\n";

	return 0;
	}

		