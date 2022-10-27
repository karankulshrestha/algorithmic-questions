class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
            int s = matrix.size();
            for (int i = 0; i < s; i++)
                for (int j = 0; j<i; j++)
                    swap(matrix[i][j], matrix[j][i]);

            for (int m = 0; m < s; m++)
                reverse(matrix[m].begin(), matrix[m].end());
                    

            for (int i = 0; i < matrix.size(); i++)
            {
                for (int j = 0; j < matrix[0].size(); j++)
                {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
    }
};