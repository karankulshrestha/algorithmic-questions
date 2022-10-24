class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int min_price = INT32_MAX;
        int prof = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            min_price = min(min_price, arr[i]);
            prof = max(prof, arr[i] - min_price);
        }
        return prof;
    }
};