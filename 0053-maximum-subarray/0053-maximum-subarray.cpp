class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT32_MIN;
        int sum = 0;
        for (const auto e : nums)
        {
            sum += e;
            maxi = max(sum, maxi);
            if (sum < 0) sum = 0;
        }
        return maxi;
    }
};