#include "dfs.h"

/*
 * Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

Example:

board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

Given word = "ABCCED", return true.
Given word = "SEE", return true.
Given word = "ABCB", return false.


Constraints:

board and word consists only of lowercase and uppercase English letters.
1 <= board.length <= 200
1 <= board[i].length <= 200
1 <= word.length <= 10^3
 */

/// Solved using general backtracking template. Since we do not have a vector to fill here, instead of utilizing push_back() and  pop_back() to search in the
/// problem space, we marked the nodes that we have visited(same purpose of push_back()) and then restored it (same purpose of pop_back()).

bool helper(std::vector<std::vector<char>>& board, std::string& word, int i, int j, int pos)
{
    if(pos == word.size()) { /// If we have successfully reached a pos this long, then we have found the word.
        return true;
    }

    if(i < 0 || j < 0 || i > board.size() - 1 || j > board[0].size() - 1 || board[i][j] != word[pos]) {
        return false;
    }

    board[i][j] = '*';

    /// Note that we are always increasing pos here, since we will advance the search towards left.
    bool result = helper(board, word, i+1, j, pos+1)
                  || helper(board, word, i-1, j, pos+1)
                  || helper(board, word, i, j+1, pos+1)
                  || helper(board, word, i, j-1, pos+1);

    board[i][j] = word[pos]; /// We know that the original value of this node is word[pos], if it were not the could not even reach here due to if above.
    return result;
}

bool exist(std::vector<std::vector<char>>& board, std::string word) {
    for(int i = 0; i < board.size(); ++i) {
        for(int j = 0; j < board[0].size(); ++j) {
            if(helper(board, word, i, j, 0)) {
                return true;
            }
        }
    }

    return false;
}