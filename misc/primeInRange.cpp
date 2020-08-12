#include <bits/stdc++.h>
using namespace std;

#define ll long long

void simpleSieve(int lmt, vector<int>& prime) {
   bool mark[lmt + 1];
   memset(mark, false, sizeof(mark));
   for (int i = 2; i <= lmt; ++i) {
      if (mark[i] == false) {
         prime.push_back(i);
         for (int j = i; j <= lmt; j += i)
            mark[j] = true;
      }
   }
}

void PrimeInRange(ll low, ll high) {
   int lmt = floor(sqrt(high)) + 1;
   vector<int> prime;
   simpleSieve(lmt, prime);
   int n = high - low + 1;
   bool mark[n + 1];
   memset(mark, false, sizeof(mark));
   for (int i = 0; i < prime.size(); i++) {
      int lowLim = floor(low / prime[i]) * prime[i];
      if (lowLim < low)
         lowLim += prime[i];
      for (int j = lowLim; j <= high; j += prime[i])
         mark[j - low] = true;
   }
   for (int i = low; i <= high; i++)
      if (!mark[i - low])
         cout<<i<<"\n";
}

int main() {

   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   
   ll t;
   cin>>t;

   ll low,high;

   while(t--){
      
      cin>>low>>high;
      PrimeInRange(low, high);
      cout<<"\n";
   }

   return 0;
}