#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,v,cnt=0;
  cin>>n;
  cin>>v;
  int max=v,min=v;
  for(int i=1;i<n;i++){
    cin>>v;
    if(max<v){
      max = v;
      cnt++;
    }
    if(min>v){
      min=v;
      cnt++;
    }
  }

  cout<<cnt<<endl;
  return 0;
}
