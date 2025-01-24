class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visit,
             vector<bool>& inS) {
        if (inS[node]) {
            return true;
        }
        if (visit[node]) {
            return false;
        }
        visit[node] = true;
        inS[node] = true;
        for (auto neighbor : adj[node]) {
            if (dfs(neighbor, adj, visit, inS)) {
                return true;
            }
        }
        inS[node] = false;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> visit(n), inS(n);

        for (int i = 0; i < n; i++) {
            dfs(i, graph, visit, inS);
        }

        vector<int> sN;
        for (int i = 0; i < n; i++) {
            if (!inS[i]) {
                sN.push_back(i);
            }
        }

        return sN;
    }
};