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

    void add_edge(int i, int j, bool un_dir = true) {
        adjacent[i].push_back(j);

        if (un_dir) {
            adjacent[j].push_back(i);
        }
    }

    int bfs(int start, int destination) {
        queue<int> q;
        bool *visited = new bool[this->v]{false};
        vector<int> dist(this->v, 0);

        q.push(start);
        visited[start] = true;
        dist[start] = 0;

        while (!q.empty()) {
            int front = q.front();
            q.pop();

            for (auto node : adjacent[front]) {
                if (!visited[node]) {
                    q.push(node);
                    visited[node] = true;
                    dist[node] = dist[front] + 1;
                }
            }
        }

        return dist[destination];
    }
};

int min_dice_throws(int n, vector<pair<int, int>> &snakes, vector<pair<int, int>> &ladders) {
    vector<int> board(n + 1, 0);

    for (auto snake : snakes) {
        int start = snake.first;
        int end = snake.second;
        board[start] = end - start;
    }

    for (auto ladder : ladders) {
        int start = ladder.first;
        int end = ladder.second;
        board[start] = end - start;
    }

    Graph g(n + 1);

    for (int u = 1; u < n; u++) {
        for (int dice = 1; dice <= 6; ++dice) {
            int v = u + dice;
            v += board[v];
            if (v <= n) {
                g.add_edge(u, v);
            }
        }
    }

    return g.bfs(1, n);
}

int main() {
    int s, l;
    cin >> l;
    vector<pair<int, int>> snake, ladder;

    int st, en;
    for (int i = 0; i < l; i++) {
        cin >> st >> en;
        ladder.push_back({st, en});
    }

    cin >> s;
    for (int i = 0; i < s; i++) {
        cin >> st >> en;
        snake.push_back({st, en});
    }

    cout << min_dice_throws(100, snake, ladder);
}
