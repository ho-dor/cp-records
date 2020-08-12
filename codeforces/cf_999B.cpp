#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string str;
  cin>>str;
  vector<int> divisors;
  for(int i=2;i<=n;i++){
    if(n%i==0){
      divisors.push_back(i);
    }
  }

  int counter = divisors.size();int i=0;
  while(i<counter){
    reverse(str.begin(),str.begin()+divisors[i]);
    i++;
  }

  cout<<str;
  return 0;
}
