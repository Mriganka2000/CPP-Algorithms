#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Graph {
    list<int> *adjacent;
    int v;

public:
    Graph(int v) {
        this->v = v;
        this->adjacent = new list<int>[v];
    }

    void add_edge(int x, int y) {
        adjacent[x].push_back(y);
        adjacent[y].push_back(x);
    }

    bool dfs(int node, vector<bool> &visited, int parent) {
        visited[node] = true;

        for (auto nbr : adjacent[node]) {
            if (!visited[nbr]) {
                bool nbr_has_cycle = dfs(nbr, visited, node);
                if (nbr_has_cycle) {
                    return true;
                }
            }
//            neighbour is visited, and it is not the parent of the current node in the current dfs call
            else if (nbr != parent) {
                return true;
            }
        }

        return false;
    }

    bool contains_cycle() {
        vector<bool> visited(v, false);
        return dfs(0, visited, -1);
    }
};

int main() {
    Graph g(3);

    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(2, 0);

    cout << g.contains_cycle() << endl;
}
