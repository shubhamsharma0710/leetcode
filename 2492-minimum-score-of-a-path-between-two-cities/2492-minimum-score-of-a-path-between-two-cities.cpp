class Solution {
public:
    int res = INT_MAX;
    unordered_set<int> visited;
    unordered_map<int, vector<pair<int, int>>> adj;
    void dfs(int node) {
        if (visited.count(node))
            return;
        visited.insert(node);
        for (auto &it : adj[node]) {
            int nei = it.first;
            int dist = it.second;
            res = min(res, dist);
            dfs(nei);
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        for (auto &road : roads) {
            int src = road[0];
            int dst = road[1];
            int dist = road[2];
            adj[src].push_back({dst, dist});
            adj[dst].push_back({src, dist});
        }

        dfs(1);
        return res;
    }
};