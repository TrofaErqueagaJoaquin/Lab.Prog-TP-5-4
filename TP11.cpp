#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 == 0) {
                matrix[i][j] = 'L';
            } else {
                matrix[i][j] = 'O';
            }
        }
    }

    int q = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (matrix[i][j] == 'L' && matrix[i][j + 1] == 'O' && matrix[i + 1][j] == 'L') {
                ++q;
            }
        }
    }

    cout << n << " " << m << " " << q << "\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j];
        }
        cout << "\n";
    }

    return 0;
}
