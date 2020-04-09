#include<bits/stdc++.h>
using namespace std;

int main(){

long long x;
cin>>x;

int five_hund = x/500;
int remain = x - (500*five_hund);
int five = remain/5;

int ans = 1000*five_hund + 5*five;
cout<<ans<<endl;
return 0;
}
