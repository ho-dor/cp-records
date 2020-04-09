#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string str;
    cin>>str;
    int max=0,i=1;int count=0;
    if(str[0]=='L'){
      max=1;count=1;
    }

    while(i<str.length()){
      if(str[i]=='L' && str[i-1]=='L'){
        count++;
      }else if(str[i]=='L'){
        count=1;
      }
      else{
        count=0;
      }
      if(max<count){
        max = count;
      }
      i++;
    }
    cout<<max+1<<endl;
  }
  return 0;
}
