class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mpp;
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            int compliment = target - nums[i];
            if(mpp.find(compliment) != mpp.end()){
                // we found it 
                
                ans.push_back(mpp[compliment]);
                ans.push_back(i);
            }
            else{
                mpp[nums[i]] = i;

            }
        }
        return ans;

    }
};
