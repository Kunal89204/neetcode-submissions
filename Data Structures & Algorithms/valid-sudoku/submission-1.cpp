class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> seen;

        // Check rows
        for(int i = 0; i < 9; i++) {

            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.') {
                    continue;
                }

                if(seen.find(board[i][j]) != seen.end()) {
                    return false;
                }

                seen.insert(board[i][j]);
            }

            seen.clear();
        }


        // Check columns
        for(int i = 0; i < 9; i++) {

            for(int j = 0; j < 9; j++) {

                if(board[j][i] == '.') {
                    continue;
                }

                if(seen.find(board[j][i]) != seen.end()) {
                    return false;
                }

                seen.insert(board[j][i]);
            }

            seen.clear();
        }


        // Check 3 x 3 boxes
        for(int row = 0; row < 9; row += 3) {

            for(int col = 0; col < 9; col += 3) {

                seen.clear();

                for(int i = row; i < row + 3; i++) {

                    for(int j = col; j < col + 3; j++) {

                        if(board[i][j] == '.') {
                            continue;
                        }

                        if(seen.find(board[i][j]) != seen.end()) {
                            return false;
                        }

                        seen.insert(board[i][j]);
                    }
                }
            }
        }

        return true;
    }
};