#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    string str;
    cin>>str;
    int l = str.length();
    if(l>10){
      cout<<str[0]<<(l-2)<<str[l-1]<<endl;
    }else{
      cout<<str<<"\n";
    }
  }
  return 0;
}
