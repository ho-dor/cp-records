#include<bits/stdc++.h>
using namespace std;

#define ll long long int

const ll MAX_CHAR = 256;
const ll MAX_FACT = 1000000007;
ll fact[MAX_FACT];

// utility for calculating factorials
void precomputeFactorials()
{
    fact[0] = 1;
    for (int i = 1; i < MAX_FACT; i++)
        fact[i] = fact[i - 1] * i;
}


void nPermute(char* str, int n)
{
    precomputeFactorials();

    int len = strlen(str);

    ll freq[MAX_CHAR] = { 0 };
    for (int i = 0; i < len; i++)
        freq[str[i] - 'a']++;

    char out[MAX_CHAR];


    int sum = 0;
    int k = 0;

    while (sum != n) {

        sum = 0;

        for (int i = 0; i < MAX_CHAR; i++) {
            if (freq[i] == 0)
                continue;

            // Remove character
            freq[i]--;

            int xsum = fact[len - 1 - k];
            for (int j = 0; j < MAX_CHAR; j++)
                xsum /= fact[freq[j]];
            sum += xsum;

            if (sum >= n) {
                out[k++] = i + 'a';
                n -= (sum - xsum);
                break;
            }

            // if sum < n, add character back
            if (sum < n)
                freq[i]++;
        }
    }
    for (int i=MAX_CHAR-1; k < len && i >= 0; i--)
        if (freq[i]) {
            out[k++] = i + 'a';
            freq[i++]--;
        }
    out[k] = '\0';
    cout <<out<<endl;
}

char* buildString(int n){
  char* str;
  int i=0;
    for(i=0;i<(n-2);i++){
      str[i]='a';
    }
    str[i]='b';
    str[i+1]='b';

    return str;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    char str[n+1];
    int i=0;
    for(i=0;i<(n-2);i++){
      str[i]='a';
    }
    str[i]='b';str[i+1]='b';
    str[i+2]='\0';
    nPermute(str, k);
  }
  return 0;
}
