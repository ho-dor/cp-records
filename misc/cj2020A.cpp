#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void c_p_c()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(){
	
	//c_p_c();

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll t;
	cin>>t;
	int c=1;

	while(t--){

		int n;
		cin>>n;

		int a[n][n];

		int sum=0,row=0,col=0;

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				if(i==j){
					sum+=a[i][j];
				}
			}
		}
		
		//row.
		vector<int> rowit(n);
		for(int i=0;i<n;i++){
			rowit.clear();
			rowit.push_back(a[i][0]);
			for(int j=1;j<n;j++){
				auto it = find(rowit.begin(),rowit.end(),a[i][j]);
				if(it!=rowit.end()){
					row++;
					break;
				}else{
					rowit.push_back(a[i][j]);
				}
			}
		}


		cout<<"\n";

		int b[n][n];

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[i][j] = a[j][i];
			}
		}

	
		for(int i=0;i<n;i++){
			rowit.clear();
			rowit.push_back(b[i][0]);
			for(int j=1;j<n;j++){
				auto it = find(rowit.begin(),rowit.end(),b[i][j]);
				if(it!=rowit.end()){
					col++;
					break;
				}else{
					rowit.push_back(b[i][j]);
				}
			}
		}

		
		cout<<"Case #"<<c<<": "<<sum<<" "<<row<<" "<<col; 
		cout<<"\n";
		c++;

	}

	return 0;
	}

		