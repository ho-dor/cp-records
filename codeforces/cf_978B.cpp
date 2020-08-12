#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string str;
  cin>>str;
  if(n<3){
    cout<<0;
    return 0;
  }
  int i=0;
  int j=i+2;
  int count=0;

  while(j<n){
    string s="";
    s+=str[i];
    s+=str[i+1];
    s+=str[j];

    if(s=="xxx"){
      count+=1;
    }
    i++;j++;
  }

  cout<<count<<"";
  return 0;
}
