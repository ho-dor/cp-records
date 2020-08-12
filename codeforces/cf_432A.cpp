#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,v;
  cin>>n>>k;
  int cnt=0;
  for(int i=0;i<n;i++){
    cin>>v;
    if(v+k<=5){
      cnt++;
    }
  }
  cout<<cnt/3<<"\n";
  return 0;
}
