#include <iostream>
#include <list>
#include <queue>

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

    void bfs(int start) {
        queue<int> q;
        bool *visited = new bool[this->v]{false};
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int front = q.front();
            cout << front << endl;
            q.pop();

            for (auto node : adjacent[front]) {
                if (!visited[node]) {
                    q.push(node);
                    visited[node] = true;
                }
            }
        }
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

    g.bfs(1);
}
