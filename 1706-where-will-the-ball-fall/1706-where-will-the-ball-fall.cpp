class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int cpos, npos;
        vector<int> ans;
        for(int i = 0; i < cols; i++) {
            cpos = i;
            npos = -1;
            for(int j = 0; j < rows; j++) {
                npos = cpos + grid[j][cpos];
                if (npos < 0 || npos >= cols || grid[j][cpos] != grid[j][npos] ) {
                    npos = -1;
                    break;
                };
                cpos = npos;
            };
            ans.push_back(npos);
        };
        return ans;
    }
};