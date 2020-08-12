class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> m;
        long long total=0;
        for(char c: S){
            m[c]++;
        }
        for(char c: J){
            if(m.find(c)!=m.end()){
                total+=m[c];
            }
        }
        return total;
    }
};