#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main() {
    int m, n;
    cout << "请输入行数(m): ";
    cin >> m;
    cout << "请输入列数(n): ";
    cin >> n;

    vector<vector<char>> board(m, vector<char>(n));

    cout << "请按行为矩阵输入值(使用'X'或'O'): " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    Solution solution;
    solution.solve(board);

    cout << "结果矩阵为: " << endl;
    for (const auto &row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}

