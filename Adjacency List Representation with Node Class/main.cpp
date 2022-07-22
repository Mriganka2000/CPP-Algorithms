#include <iostream>
#include <list>
#include <unordered_map>
#include <vector>

using namespace std;

class Node {
public:
    string name;
    list<string> neighbours;

    Node(string name) {
        this->name = name;
    }
};

class Graph {
    unordered_map<string, Node *> map;

public:
    Graph(vector<string> names) {
        for (auto name : names) {
            map[name] = new Node(name);
        }
    }

    void add_edge(string x, string y, bool un_dir = false) {
        map[x]->neighbours.push_back(y);

        if (un_dir) {
            map[y]->neighbours.push_back(x);
        }
    }

    void print_graph() {
        for (auto pair : map) {
            string name = pair.first;
            Node *node = pair.second;
            cout << name << " -> ";

            for (auto neighbour : node->neighbours) {
                cout << neighbour << ", ";
            }

            cout << endl;
        }
    }
};

int main() {
    vector<string> cities = {"Delhi", "London", "Paris", "New York"};
    Graph g(cities);

    g.add_edge("Delhi", "London");
    g.add_edge("New York", "London");
    g.add_edge("Delhi", "Paris");
    g.add_edge("Paris", "New York");

    g.print_graph();
}
