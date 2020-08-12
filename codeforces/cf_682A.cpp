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

	ll n,m;
    cin>>n>>m;
    ll t=min(n,m);
    ll tt=max(n,m);
    ll ans=t*(tt/5);
    
    if(tt%5!=0)
    {
        for(ll i=5*(tt/5)+1;i<=tt;i++)
        {
            for(ll j=1;j<=t;j++)
            {
                if((i+j)%5==0)
                ans++;
            }
        }
    }
    cout<<ans;

	return 0;
	}

		