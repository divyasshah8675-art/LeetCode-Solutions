
class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        vector<long long> ans;

        for (int x : queries) {

            int idx = lower_bound(nums.begin(), nums.end(), x) - nums.begin();

            long long left = (long long)x * idx - prefix[idx];

            long long right = prefix[n] - prefix[idx] - (long long)x * (n - idx);

            ans.push_back(left + right);
        }

        return ans;
    }
};
