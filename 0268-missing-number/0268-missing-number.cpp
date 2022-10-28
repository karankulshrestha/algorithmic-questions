class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans;
        vector<int> temp;
        vector<int> v_symDifference;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i <= n; i++)
        {
            temp.push_back(i);
        };
        set_symmetric_difference(
        temp.begin(), temp.end(),
        nums.begin(), nums.end(),
        back_inserter(v_symDifference));

        for(int j : v_symDifference)
            ans = j;
        
        return ans;
    }
};