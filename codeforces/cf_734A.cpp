#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int a=0,d=0;
  for(char c: s){
    if(c=='A'){
      a+=1;
    }else{
      d+=1;
    }
  }
  if(a>d){
    cout<<"Anton";
  }else if(a<d){
    cout<<"Danik";
  }else{
    cout<<"Friendship";
  }
  return 0;
}
