#include <iostream>
#include <vector>

using namespace std;

bool dfs_helper(vector<int> graph[], int node, int *visited, int parent, int color) {
    visited[node] = color;

    for (auto nbr : graph[node]) {
        if (visited[nbr] == 0) {
            int sub_problem = dfs_helper(graph, nbr, visited, node, 3 - color);
            if (sub_problem == false) {
                return false;
            }
        }
        else if (nbr != parent and color == visited[nbr]) {
            return false;
        }
    }

    return true;
}

bool dfs(vector<int> graph[], int e) {
    int visited[e];

    for (int i = 0; i < e; ++i) {
        visited[i] = 0;
    }

    int color = 1;

    bool ans = dfs_helper(graph, 0, visited, -1, color);

    return ans;
}

int main() {
    int v, e;
    cin >> v >> e;

    vector<int> graph[v];

    while (e--) {
        int source, dest;
        cin >> source >> dest;

        graph[source].push_back(dest);
        graph[dest].push_back(source);
    }

    cout << "Is bipartite :- " << dfs(graph, e);

    return 0;
}
