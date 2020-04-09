#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  size_t H = s.find('H');
  size_t Q = s.find('Q');
  size_t nine = s.find('9');

  if(H!=string::npos || Q!=string::npos || nine!=string::npos){
    cout<<"YES";
    return 0;
  }
  cout<<"NO";
  return 0;
}
