#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    bool even=false,odd=false;
    vector<int> v(n); int max=-1,min=INT_MAX;
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]%2==0){
        even=true;
      }else{
        odd=true;
      }
    }

    if(odd && even){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
