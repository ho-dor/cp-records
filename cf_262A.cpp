#include <cstdio>
#include <algorithm>
using namespace std;

int n, k;

int check(int x)
{
     int ret = 0;
     while (x) {
	  ret += (x % 10 == 4 || x % 10 == 7);
	  x /= 10;
     }
     return ret;
}

int main()
{
#ifndef ONLINE_JUDGE
     freopen("cf.in" , "r", stdin);
     freopen("cf.out", "w", stdout);
#endif
     scanf("%d%d", &n, &k);
     int Ans = 0;
     for (int i = 1, x; i <= n; i ++) {
	  scanf("%d", &x);
	  Ans += (check(x) <= k);
     }
     printf("%d\n", Ans);
}
