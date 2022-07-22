#include <iostream>
#include <vector>

using namespace std;

int dfs(vector<vector<int>> &matrix, vector<vector<bool>> &visited, int i, int j, int m, int n) {
    visited[i][j] = true;

    int count_size = 1;

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for (int k = 0; k < 4; ++k) {
        int new_x = i + dx[k];
        int new_y = j + dy[k];

        if (new_x >= 0 and new_x < m and new_y >= 0 and new_y < n and matrix[new_x][new_y] == 1 and !visited[new_x][new_y]) {
            int sub_component = dfs(matrix, visited, new_x, new_y, m, n);
            count_size += sub_component;
        }
    }

    return count_size;
}

int largest_island(vector<vector<int>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<bool>> visited(m, vector<bool>(n, false));

    int largest = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j] and matrix[i][j] == 1) {
                int size = dfs(matrix, visited, i, j, m, n);
                if (size > largest) {
                    largest = size;
                }
            }
        }
    }

    return largest;
}

int main() {
    vector<vector<int>> grid = {
            {1, 0, 0, 1, 0},
            {1, 0, 1, 0, 0},
            {0, 0, 1, 0, 1},
            {1, 0, 1, 1, 1},
            {1, 0, 1, 1, 0}
    };

    cout << largest_island(grid);
}
