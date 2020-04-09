#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  sort(v.begin(),v.end());
  int sum=0;
  int max = INT_MIN;
  for(int i=0;i<m;i++){
    sum-=(v[i]);
    if(sum<0){
      sum=0;
    }
    if(max<sum){
      max = sum;
    }
  }

  cout<<max<<endl;
  return 0;
}
