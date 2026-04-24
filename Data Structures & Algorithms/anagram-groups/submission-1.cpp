class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> mpp;
       for(string s :strs){
            int freq[26] = {0};
            for(auto it:s){
                freq[it-'a']++;
            }
            // generate key
            string key = "";
            for(int i = 0; i < 26; i++){
                key += "#" + to_string(freq[i]);
            }
            mpp[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto it:mpp){
            result.push_back(it.second);
        }
        return result;

    }
};
