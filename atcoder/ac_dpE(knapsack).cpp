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

void max_self(ll& a, ll b) {
    a = max(a, b);
}
void min_self(ll& a, ll b) {
    a = min(a, b);
}

const ll INF = 1e18L + 5;

int main() {
    int n, W;
    scanf("%d%d", &n, &W);
    vector<int> weight(n), value(n);
    for(int i = 0; i < n; ++i) {
        scanf("%d%d", &weight[i], &value[i]);
    }
    int sum_value = 0;
    for(int x : value) {
        sum_value += x;
    }
    vector<ll> dp(sum_value + 1, INF); // 0 ... W
    dp[0] = 0;
    // dp[i] - the minimum total weight of items with total value exactly i
    for(int item = 0; item < n; ++item) {
        for(int value_already = sum_value - value[item]; value_already >= 0; --value_already) {
        //~ for(int weight_already = 0; weight_already <= W - weight; ++weight_already) {
            min_self(dp[value_already+value[item]], dp[value_already] + weight[item]);
        }
    }
    ll answer = 0;
    for(int i = 0; i <= sum_value; ++i) {
        if(dp[i] <= W) {
            answer = max(answer, (ll) i);
        }
        //~ min_self(answer, dp[i]);
    }
    printf("%lld\n", answer);
}