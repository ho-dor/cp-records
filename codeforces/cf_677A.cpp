#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,h;
  cin>>n>>h;
  int v,count=0;
  for(int i=0;i<n;i++){
    cin>>v;
    if(v>h){
      count+=2;
    }else{
      count+=1;
    }
  }

  cout<<count<<endl;
  return 0;
}
