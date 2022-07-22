#include <iostream>
#include <list>

using namespace std;

class Graph {
    int v;
    list<int> *adjacent;

public:
    Graph(int v) {
        this->v = v;
        this->adjacent = new list<int>[this->v];
    }

    void add_edge(int i, int j, bool un_dir = true) {
        adjacent[i].push_back(j);

        if (un_dir) {
            adjacent[j].push_back(i);
        }
    }

    void dfs_helper(int node, bool *visited) {
        cout << node << " --> ";
        visited[node] = true;

        for (int neighbour : this->adjacent[node]) {
            if (!visited[neighbour]) {
                dfs_helper(neighbour, visited);
            }
        }

        return;
    }

    void dfs(int start) {
        bool *visited = new bool[this->v]{false};
        dfs_helper(start, visited);
    }
};

int main() {
    Graph g(7);

    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 5);
    g.add_edge(5, 6);
    g.add_edge(4, 5);
    g.add_edge(0, 4);
    g.add_edge(3, 4);

    g.dfs(1);
}
