#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;

    long long int y=log2(n);
    long long int sub=pow(2,y+1)-1;
    long long int sum=((n)*(n+1))/2;
   // cout<<sum;
   if(n==1) cout<<-1<<"\n";
   else
    cout<<sum-2*sub<<"\n";
  }
  return 0;
}
