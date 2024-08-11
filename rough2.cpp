#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int dfs(int node, int parent, vector<vector<int>>& adj, vector<int>& frequency, int& maxLength) {
        int maxi1 = 0, maxi2 = 0;
        for (int neighbor : adj[node]) {
            if (neighbor == parent) continue;
            int currentLength = dfs(neighbor, node, adj, frequency, maxLength);
            if (abs(frequency[node] - frequency[neighbor]) <= 1) {
                if (currentLength + 1 > maxi1) {
                    maxi2 = maxi1;
                    maxi1 = currentLength + 1;
                } else if (currentLength + 1 > maxi2) {
                    maxi2 = currentLength + 1;
                }
            }
        }
        maxLength = max(maxLength, maxi1 + maxi2);
        return maxi1;
    }
    
    int calculateMax(int network_nodes, vector<int>& network_from, vector<int>& network_to, vector<int>& frequency) {
        vector<vector<int>> adj(network_nodes);
        for (int i = 0; i < network_from.size(); ++i) {
            int u = network_from[i] - 1;
            int v = network_to[i] - 1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int maxLength = 0;
        dfs(0, -1, adj, frequency, maxLength);
        
        return maxLength;
    }
};

int main() {
    Solution solution;
    
    int network_nodes = 4;
    vector<int> network_from = {1, 2, 3};
    vector<int> network_to = {2, 3, 4};
    vector<int> frequency = {1, 3, 2,1};
    
    int answer = solution.calculateMax(network_nodes, network_from, network_to, frequency);
    cout << "the required answer is  " << answer << endl;
    
    return 1;
}