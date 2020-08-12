class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();bool flag=false;
        int sum=0;int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                flag=true;
                max = INT_MIN;
                break;
            }
            else if(max<nums[i]){
                max=nums[i];
            }
        }
        if(flag){
           for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<0){
                sum=0;
            }
            if(max<sum){
                max=sum;
            }
        } 
        }
        
        return max;
    }
};