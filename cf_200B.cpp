#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,v,sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>v;
    sum+=v;
  }
  cout<<(double)sum/n<<"\n";
  return 0;
}
