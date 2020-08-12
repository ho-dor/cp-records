#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n+1);
  vector<int> result(n+1);
  for(int i=0;i<n;i++){
    cin>>v[i+1];
    result[v[i+1]] = i+1;
  }

  for(int i=1;i<=n;i++){
    cout<<result[i]<<" ";
  }

  return 0;
}
