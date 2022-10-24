class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;

        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[low], arr[mid]);
                mid++;
                low++;
            } else if (arr[mid] == 1)
            {
                swap(arr[mid], arr[low]);
                mid++;
            } else if (arr[mid] == 2)
            {
                swap(arr[high], arr[mid]);
                high--;
            }
        }

        for (const auto e : arr)
        {
            cout << e << " ";
        }
    }
};