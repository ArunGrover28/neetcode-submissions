class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map <string,vector<string>> mpp;
        for(string it:strs){
            string s = it;
            sort(s.begin(),s.end());
            mpp[s].push_back(it);
        }

        vector<vector<string>> result;
        for(auto it:mpp){
            result.push_back(it.second);
        }
        return result;

    }
};
