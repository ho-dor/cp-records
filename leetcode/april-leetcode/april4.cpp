class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       int i=0;
        int j=n-1;
        int k=n;
        bool nz=false;
        
        for(int l=0;l<n;l++){
            if(nums[l]!=0){
                nz=true;
                break;
            }
        }
        
        if(nz){
          while(i<j){
            if(nums[j]==0 && nums[i]!=0){
                j--;
                i++;
            }else if(nums[i]==0){
                nums.insert(nums.begin()+j+1,0);
                nums.erase(nums.begin()+i);
            }else if(nums[i]!=0){
                i++;
            }else if(nums[j]==0){
                j--;
            }
        }   
        }
    }
};