class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
         
            int n = strs.size();

            map<string,vector<string>> s;

            for(int i=0;i<n;i++){

                string temp = strs[i];

                sort(strs[i].begin(),strs[i].end());

                s[strs[i]].push_back(temp);

            }

             vector<vector<string>> res;

            for(auto i=s.begin();i!=s.end();i++){

                res.push_back(i->second);

            }

            return res;
        
    }
};