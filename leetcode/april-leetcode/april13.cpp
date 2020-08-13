class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n = nums.size();
        
        unordered_map<int,int> m;
        m[0]=0;
        int sum=0;
        int max_len=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                sum-=1;        
            }else{
                sum+=1;
            }
            
            if(m.count(sum)){
                int len = i+1-m[sum];
                if(len>max_len){
                    max_len = len;
                }
            }else{
                m[sum]=i+1;
            }
        }
        return max_len;
    }
};