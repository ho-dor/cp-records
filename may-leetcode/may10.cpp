class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int> NoT(N+1);
        vector<int> WtT(N+1);
        
        for(int i=0;i<trust.size();i++){
            
            NoT[trust[i][1]]++;
            WtT[trust[i][0]]++;
        
        }
        
        for(int i=1;i<=N;i++){
            
            if(NoT[i]==N-1 && WtT[i]==0)
                return i;
            
        }
        
        return -1;
    }
};