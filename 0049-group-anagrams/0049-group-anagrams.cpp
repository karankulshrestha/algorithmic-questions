class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> final;    
            for (string str : strs)
            {
                string temp = str;
                sort(str.begin(), str.end());
                final[str].push_back(temp);
            }

            vector<vector<string>> result;
            for (auto itr = final.begin(); itr != final.end(); itr++)
            {
                result.push_back(itr->second);
            }
            return result;
    }
};