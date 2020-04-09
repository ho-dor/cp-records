#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 100005;

struct dsu {
	vector<int> par, sz;
	int total_comp;
	void init(int n) {
		par.resize(n);
		sz.resize(n, 1);
		for (int i = 0; i < n; i++) par[i] = i;
		total_comp = n;
	}
	int get(int x) {
		if (x == par[x]) return x;
		else return par[x] = get(par[x]);
	}
	void unite(int x, int y) {
		x = get(x);
		y = get(y);
		if (x != y) {
			par[x] = y;
			sz[y] += sz[x];
			sz[x] = 0;
			total_comp--;
		}
	}
};

void solve() {
	int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
	cin >> n;
	vector<int> a(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	return ;
}

int32_t main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// int t; cin >> t; while (t--)
	solve();
	return 0;
}