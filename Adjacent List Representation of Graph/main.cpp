#include <iostream>
#include <list>

using namespace std;

class Graph {
    int v;
    list<int> *l;

public:
    Graph(int v) {
        this->v = v;
        this->l = new list<int>[this->v];
    }

    void add_edge(int i, int j, bool un_dir = true) {
        l[i].push_back(j);
        if (un_dir) {
            l[j].push_back(i);
        }
    }

    void print_graph() {
        for (int i = 0; i < v; ++i) {
            cout << i << " --> ";
            for (auto node : l[i]) {
                cout << node << ", ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(6);
    g.add_edge(0, 1);
    g.add_edge(0, 4);
    g.add_edge(2, 1);
    g.add_edge(3, 4);
    g.add_edge(4, 5);
    g.add_edge(2, 3);
    g.add_edge(3, 5);

    g.print_graph();
}
