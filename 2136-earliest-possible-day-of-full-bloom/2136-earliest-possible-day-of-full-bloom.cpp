class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        multimap<int, int> seed;
        for (int i = 0; i < plantTime.size(); i++)
            seed.insert({growTime[i], plantTime[i]});

        int time = 0;
        int maxy = 0;

        for (auto itr = seed.rbegin(); itr != seed.rend(); itr++)
        {
            time += itr->second;
            maxy = max(maxy, time + itr->first);
        }
        return maxy;
    }
};