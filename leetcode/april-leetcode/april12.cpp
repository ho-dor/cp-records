class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        if(stones.size()==0)
            return 0;
        
        while(stones.size()>1){
         
            sort(stones.rbegin(),stones.rend());
            
            if(stones[0]<stones[1]){
                int temp = stones[0];
                stones.erase(stones.begin());
                stones[0] = stones[0] - temp;
            }
            else if(stones[0]>stones[1]){
                int temp = stones[1];
                stones.erase(stones.begin()+1);
                stones[0] = stones[0] - temp;
            }
            else{
                stones.erase(stones.begin());
                stones.erase(stones.begin());
            }
            
        }
        if(stones.size()==0){
            return 0;
            
        }
        return stones[0];
        
    }
};