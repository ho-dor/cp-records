class Solution {
public:
    int findComplement(int num) {
        
        int power = 0;
        int sum=0;
        int len = floor(log2(5))+1;
    
        while(num>0){
            
            sum += (!(num&1))*pow(2,power);
            power++;
            num=num>>1;
        
        }
        
        return sum;
    
    }
};