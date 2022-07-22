#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Graph {
    int v;
    list<int> *adjacent;

public:
    Graph(int v) {
        this->v = v;
        this->adjacent = new list<int>[this->v];
    }

    void add_edge(int x, int y) {
        adjacent[x].push_back(y);
    }

    bool dfs(int node, vector<bool> &visited, vector<bool> &stack) {
        visited[node] = true;
        stack[node] = true;

        for (int nbr : adjacent[node]) {
            if (stack[nbr]) {
                return true;
            }
            else if (!visited[nbr]) {
                bool nbr_has_cycle = dfs(nbr, visited, stack);
                if (nbr_has_cycle) {
                    return true;
                }
            }
        }

        stack[node] = false;
        return false;
    }

    bool cycle_detection() {
        vector<bool> visited(v, false);
        vector<bool> stack(v, false);

        for (int i = 0; i < v; i++) {
            if (!visited[i]) {
                if (dfs(i, visited, stack)) {
                    return true;
                }
            }
        }

        return false;
    }
};

int main() {
    Graph g(3);

    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(2, 0);

    cout << g.cycle_detection() << endl;

    return 0;
}
