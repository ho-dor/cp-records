#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long t;
   cin>>t;
   while (t--) {
     /* code */
     long long n,k;
     cin>>n>>k;
     if(n<k*k || (n-k)%2!=0){

       cout<<"NO"<<endl;

     }else{
      cout<<"YES"<<endl;
     }
   }
  return 0;
}
