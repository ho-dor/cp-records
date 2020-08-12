#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int i=0,j=n-1;int count=0;
  while((i<=j) && (v[i]<=k || v[j]<=k)){
    if(v[i]>v[j] && v[j]<=k){
      count++;
      j--;
    }else if(v[i]<=v[j] && v[i]<=k){
      count++;
      i++;
    }
  }
  cout<<count<<endl;
  return 0;
}
