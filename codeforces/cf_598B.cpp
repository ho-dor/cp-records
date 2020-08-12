#include<bits/stdc++.h>
using namespace std;

void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}

void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}

int main(){
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  string str;
  cin>>str;
  int t;
  cin>>t;
  while(t--){
    int l,r,k;
    cin>>l>>r>>k;
    string substring = str.substr(l,r);
    rightrotate(substring,k);
    str.replace(l,r,substring);
  }
reverse(str.begin(),str.end());
  cout<<str<<"\n";
  return 0;
}
