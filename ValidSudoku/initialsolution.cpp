#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_map<int, unordered_map<char, int>> boxes;
        int currentBox;

        for (int i = 0; i < board.size(); i++)
        {

            unordered_set<int> currentRow = {}; // Reset the rows and columns at the end of each traversal
            unordered_set<int> currentColumn = {};

            for (int j = 0; j < board.size(); j++)
            {
                if (board[i][j] != '.')
                {
                    if (currentRow.find(board[i][j]) != currentRow.end())
                    {
                        return false;
                    }
                    currentRow.insert(board[i][j]);

                    currentBox = (i / 3) * 3 + j / 3;
                    boxes[currentBox][board[i][j]]++;

                    if (boxes[currentBox][board[i][j]] > 1)
                    {
                        return false;
                    }
                }
                if (board[j][i] != '.')
                {
                    if (currentColumn.find(board[j][i]) != currentColumn.end())
                    {
                        return false;
                    }
                    currentColumn.insert(board[j][i]);
                }
            }
        }

        return true;
    }
};
