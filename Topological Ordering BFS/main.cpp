#include <iostream>
#include <list>
#include <queue>
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

    void topological_sort() {
        vector<int> in_degree(this->v, 0);

        for (int i = 0; i < this->v; i++) {
            for (auto nbr : this->adjacent[i]) {
                in_degree[nbr]++;
            }
        }

        queue<int> q;
//        init queue with nodes having in degree 0
        for (int i = 0; i < this->v; ++i) {
            if (in_degree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int node = q.front();
            cout << node << " ";
            q.pop();

            for (auto nbr : this->adjacent[node]) {
                in_degree[nbr]--;
                if (in_degree[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }
    }
};

int main() {
    Graph g(6);
    g.add_edge(0, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 5);
    g.add_edge(4, 5);
    g.add_edge(1, 4);
    g.add_edge(1, 2);

    g.topological_sort();

    return 0;
}
