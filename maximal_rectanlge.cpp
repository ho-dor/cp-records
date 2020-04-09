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

	//TODO

	int r,c;
	cin>>r>>c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}

	int it=r-1;
	int max=0;
	while(it--){
		vector<int> left(c);
		vector<int> right(c);

		left[0]=a[it][0];
		right[c-1]=a[it][c-1];
		for(int i=1;i<c-1;i++){
			if(a[it][i]<left[i-1]){
				left[i]=
			}
		}

	}
	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		