#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  int drinks = (k*l)/nl;
  int lime = (c*d);
  int salt = (p/np);

  int m = min(drinks,min(lime,salt));
  cout<<m/n<<"\n";
  return 0;
}
