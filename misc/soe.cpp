#include<bits/stdc++.h>
using namespace std;



ll MAX = 1e12+5;

vector<int> v(MAX,1);

void sieve(){
    
    v[0] = 0;
    v[1] = 0;

    for(int i=2;i*i<=MAX;i++){
        if(v[i]){
          for(int j=i*i;j<=MAX;j+=i){
              v[j]=0;
           }
        }
    }
}


int main(){
  int n;
  cin>>n;
  sieve();

  if(v[n]){
    cout<<"IS PRIME";
  }else{
    cout<<"NOT PRIME";
  }
  return 0;
}
