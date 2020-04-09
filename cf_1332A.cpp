#include<bits/stdc++.h>
using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(){
  c_p_c();
  int t;
  cin>>t;
  while(t--){
    long long a,b,c,d,x,y,x1,y1,x2,y2;
    cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
    long long xa = abs(x1-x2);
    long long ya = abs(y1-y2);

    if(x - a + b >= x1 && x - a + b <= x2 && y - c + d >= y1 && y - c + d <= y2 && (a + b == 0 || x2 - x1 > 0) && (c + d == 0 || y2 - y1 > 0)){
        cout<<"YES"<<'\n';
    }else{
      cout<<"NO"<<endl;
    }

  }
  
  return 0;
}
