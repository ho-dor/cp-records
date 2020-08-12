class Solution {
public:
    
    string operate(string S){
        
        int n = S.length();
        string s;
        
        for(int i=0;i<n;i++){
            
            if(S[i]=='#'){
                if(s.size()>0)
                    s.erase(s.begin()+s.size()-1);
            }
            else{
                s+=S[i];   
            }
        
        }
        
        return s;
        
    }
    
    bool backspaceCompare(string S, string T) {
       
        
        if(operate(S)==operate(T))
            return true;
        
        return false;
        
    }
};