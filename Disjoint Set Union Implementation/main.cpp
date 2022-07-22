#include <iostream>
#include <list>

using namespace std;

// Detect cycle in a graph using Disjoint set logic

class Graph {
    int v;
    list<pair<int, int>> edges;

public:
    Graph(int v) {
        this->v = v;
    }

    void add_edge(int start, int end) {
        edges.push_back(make_pair(start, end));
    }

    int find(int i, int parent[]) {
        if (parent[i] == -1) {
            return i;
        }
        return find(parent[i], parent);
    }

    void union_set(int x, int y, int parent[]) {
        int s1 = find(x, parent);
        int s2 = find(y, parent);

        if (s1 != s2) {
            parent[s1] = s2;
        }
    }

    bool contains_cycle() {
        int *parent = new int[this->v];

        for (int i = 0; i < this->v; ++i) {
            parent[i] = -1;
        }

        for (auto edge : this->edges) {
            int i = edge.first;
            int j = edge.second;

            int s1 = find(i, parent);
            int s2 = find(j, parent);

            if (s1 != s2) {
                union_set(s1, s2, parent);
            }
            else {
                return true;
            }
        }

        delete[] parent;
        return false;
    }
};

int main() {
    Graph g(4);

    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 0);

    cout << g.contains_cycle() << endl;

    return 0;
}
