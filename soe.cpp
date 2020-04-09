#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n+1,1);
  v[0] = INT_MIN;
  v[1] = INT_MIN;
  for(int i=4;i<=n;i+=2){
    v[i]=0;
  }

  for(int i=3;i<=n;i++){
    for(int j=2*i;j<=n;j+=i){
      v[j]=0;
    }
  }

  for(int i=0;i<=n;i++){
    if(v[i]==1)
      cout<<i<<" ";
  }
  return 0;
}
