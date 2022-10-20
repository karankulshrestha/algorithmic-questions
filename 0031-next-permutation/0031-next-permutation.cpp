class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, j;
        vector<int> test = nums;
        sort(test.begin(), test.end(), greater<int>());
        if (test == nums)
        {
            sort(nums.begin(), nums.end());
            for (const auto m : test)
            {
                cout << m << " ";
            }
        } else {
            for (int k = nums.size() - 1; k != 0; k--)
            {
                if (nums[k - 1] < nums[k])
                {
                    i = k;      
                    break;
                } 
            
            }

            for (int l = nums.size() - 1; l != 0; l--)
            {
                if (nums[i - 1] < nums[l])
                {
                    j = l;
                    break;
                }          
            }

            swap(nums[i - 1], nums[j]);
            reverse(nums.begin() + i, nums.end());

            for (const auto e : nums)
            {
                cout << e << " "; 
            }
        };
    }
};