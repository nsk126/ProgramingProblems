#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <sstream>

#define ISEVEN(x) x % 2 == 0   // is even
#define ISDIV(x, y) x % y == 0 // is divisile
#define ll long long
#define ISTRUE(x) x ? "YES\n" : "NO\n"
#define LOGN(x) cout << (x) << endl;

using namespace std;

// https://leetcode.com/problems/valid-sudoku/

void print_vector(vector<int> vec); // print int elements of a vector
void solve();

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {

        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool sq[9][9] = {false};

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                int x = board[i][j];
                if (x == '.')
                    continue;

                if (rows[i][x - '0' - 1] || cols[j][x - '0' - 1] || sq[(i / 3) * 3 + (j / 3)][x - '0' - 1])
                {
                    return false;
                }

                rows[i][x - '0' - 1] = true;
                cols[j][x - '0' - 1] = true;
                sq[(i / 3) * 3 + (j / 3)][x - '0' - 1] = true;
            }
        }

        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    bool output = sol.isValidSudoku(board);
    if (output)
        cout << "true";
    else
        cout << "false";

    cout << endl;
    return 0;
}

void solve()
{
}

void print_vector(vector<int> vec)
{
    for (int x : vec)
        cout << x << " ";
    cout << endl;
}
