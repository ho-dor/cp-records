#include<bits/stdc++.h>

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

	ll step,mod;

	while(cin>>step>>mod){

		std::vector<bool> v(mod);
		ll seed = 0;

		rep(i,0,mod){

			seed = (seed+step)%mod;
			v[seed]=true;

		}

		cout<<step<<" "<<mod<<" ";

		if(count(v.begin(),v.end(),false)){
			
			cout<<"Bad Choice\n";
		}
		else{
			cout<<"Good Choice\n";
		}

		cout<<"\n";
	}

	return 0;
	}

		