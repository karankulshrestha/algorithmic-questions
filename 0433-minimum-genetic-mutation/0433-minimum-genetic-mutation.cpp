class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string> q;
        unordered_set<string> visited;
        
        q.push(start);
        visited.insert(start);
        
        int cnt = 0;
        
        while(!q.empty()) {
            int n = q.size();
            for(int i = 0; i<n; i++) {
                string node = q.front();
                q.pop();
                if (node == end) return cnt;
                
                for(char ch : "AGCT") {
                    for (int j = 0; j < node.length(); j++) {
                        string adjnode = node;
                        adjnode[j] = ch;
                        if (visited.count(adjnode) == 0 && find(bank.begin(), bank.end(), adjnode) != bank.end()) {
                            q.push(adjnode);
                            visited.insert(adjnode);
                        };
                    };
                };
            };
            cnt++;
        };
        return -1;
    }
};