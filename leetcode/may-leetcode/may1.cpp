// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         long long first=1;
       long long second=n;
       long long ans; 
        while(first<=second){
             long long mid = first + (second-first)/2;
             if(isBadVersion(mid)){
                 second=mid-1;
                 ans=mid;
             }
             else{
                 first=mid+1;
             }
        }
        return ans;
    }
};