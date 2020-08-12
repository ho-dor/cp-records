class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==0)
            return 0; 
        
        int ans = nums[0];
        
        for(int i=1;i<n;i++){
        
            ans^=nums[i];
        
        }
        
        return ans;
    }
};