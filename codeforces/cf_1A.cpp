#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(){
	
	//c_p_c();

	int n,m,a;
	cin>>n>>m>>a;

	ll row = ceil((double)n/a);
	ll col = ceil((double)m/a);

	cout<<row*col;

	return 0;
	}

		