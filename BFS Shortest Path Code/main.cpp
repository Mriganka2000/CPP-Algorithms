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

    void bfs(int start, int destination = -1) {
        queue<int> q;
        bool *visited = new bool[this->v]{false};
        int *dist = new int[this->v]{0};
        int *parent = new int[this->v]{0};

        for (int i = 0; i < this->v; i++) {
            parent[i] = -1;
        }

        q.push(start);
        visited[start] = true;
        parent[start] = start;
        dist[start] = 0;

        while (!q.empty()) {
            int front = q.front();
            cout << front << endl;
            q.pop();

            for (auto node : adjacent[front]) {
                if (!visited[node]) {
                    q.push(node);
                    parent[node] = front;
                    dist[node] = dist[front] + 1;
                    visited[node] = true;
                }
            }
        }

        for (int i = 0; i < this->v; ++i) {
            cout << "Shortest distance to " << i << " is :- " << dist[i] << endl;
        }

        if (destination != -1) {
            int temp = destination;
            while (temp != start) {
                cout << temp << " --> ";
                temp = parent[temp];
            }
            cout << start << endl;
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

    g.bfs(1, 6);
}
