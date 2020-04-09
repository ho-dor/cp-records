#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin>>n;
  int cnt=0;
  while(n>0){
    int dig = n%10;
    if(dig==4 || dig==7){
      cnt++;
    }
    n/=10;
  }
  if(cnt==4 || cnt==7)
    cout<<"YES"<<"\n";
  else
      cout<<"NO"<<"\n";
  return 0;
}
