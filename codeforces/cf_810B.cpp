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

bool compare(pair<ll,ll> a,pair<ll,ll> b){
	if(a.f!=0 && b.f!=0){
		return (a.s - a.f) > (b.s - b.f);
	}
	if(a.f==0){
		return false;
	}
	if(b.f==0){
		return true;
	}
	return true;
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll n,f;
	cin>>n>>f;

	std::vector<pair<ll,ll>> a;
	std::vector<ll> k(n);
	std::vector<ll> l(n);

	for (int i = 0; i < n; i++) {
    cin >> k[i] >> l[i];
    a.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
	}
	sort(a.rbegin(), a.rend());

	long long ans = 0;
	for (int i = 0; i < f; i++) {
	    int pos = a[i].second;
	    ans += min(2 * k[pos], l[pos]);
	}
	for (int i = f; i < n; i++) {
	    int pos = a[i].second;
	    ans += min(k[pos], l[pos]);
	}
	cout << ans;

	return 0;
	}

		