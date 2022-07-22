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

    void add_edge(int start, int end) {
        this->adjacent[start].push_back(end);
    }

    void dfs(int source, vector<bool> &visited, list<int> &ordering) {
        visited[source] = true;

        for(int nbr : this->adjacent[source]) {
            if (!visited[nbr]) {
                dfs(nbr, visited, ordering);
            }
        }

        ordering.push_back(source);

        return;
    }

    void topological_sort() {
        vector<bool> visited(this->v, false);
        list<int> ordering;

        for (int i = 0; i < this->v; i++) {
            if (!visited[i]) {
                dfs(i, visited, ordering);
            }
        }

        for (auto node : ordering) {
            cout << node << " ";
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
