class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Step 1: Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        int n = nums.size();

        // Step 2: Create buckets (index = frequency)
        vector<vector<int>> buckets(n + 1);

        for (auto it : freq) {
            int num = it.first;
            int f = it.second;
            buckets[f].push_back(num);
        }

        // Step 3: Collect top k elements
        vector<int> ans;

        for (int i = n; i >= 1 && ans.size() < k; i--) {
            for (int num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k) break;
            }
        }

        return ans;
    }
};