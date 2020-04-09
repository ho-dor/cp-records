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
	int n,m;
	
	cin>>n;
	vector<int> boys(n);

	for(int i=0;i<n;i++){
		//code
		cin>>boys[i];
	}
	
	cin>>m;
	vector<int> girls(m);
	for(int i=0;i<m;i++){
		//code
		cin>>girls[i];
	}

	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());

	int i=0,j=0;int count=0;

	while(i<n && j<m){
		//cout<<girls[j]<<" "<<boys[i]<<"\n";
		if(abs(boys[i]-girls[j])<=1){
			i++;j++;
			count++;

		}
		else if(boys[i]-girls[j]>1)
			j++;
		else if(girls[j]-boys[i]>1)
			i++;


	}

	
	cout<<count<<"\n";

	return 0;
	}

		