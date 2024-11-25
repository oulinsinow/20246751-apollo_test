#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
using namespace std;

class Solution {
private:
    void dfs(int row, int col, int r[], int c[], vector<vector<int>> &visited, vector<vector<char>> &board);

public:
    void solve(vector<vector<char>> &board);
};

#endif
