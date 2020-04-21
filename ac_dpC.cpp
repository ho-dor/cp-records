#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	long dp0 = 0, dp1 = 0, dp2 = 0;
	for(int i = 0; i < n; i++) {
		long n;
		scanf("%ld", &n);
		long t1 = max(dp0, dp1) + n;
		scanf("%ld", &n);
		long t2 = max(dp1, dp2) + n;
		scanf("%ld", &n);
		dp1 = max(dp2, dp0) + n;
		dp2 = t1;	dp0 = t2;
	}
	printf("%ld\n", max(dp0, max(dp1, dp2)));
}
