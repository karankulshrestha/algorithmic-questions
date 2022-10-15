class Solution {
public:
    vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ptree(numRows);
    for (int i = 0; i < numRows; i++)
    {
        ptree[i].resize(i + 1);
        ptree[i][0] = ptree[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            ptree[i][j] = ptree[i - 1][j - 1] + ptree[i - 1][j];
        }
        
    };
    return ptree;
    }
};