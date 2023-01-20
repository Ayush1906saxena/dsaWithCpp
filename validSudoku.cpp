class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> set;

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                
                string row = board[i][j] + " found on row i";
                string col = board[i][j] + " found on col j";
                string block = board[i][j] + " found in block " + (i/3) + " and " + (j/3);


                if( set.find(row) != set.end() || 
                    set.find(col) != set.end() ||
                    set.find(block) != set.end())
                    return false;

                set.insert(row);
                set.insert(col);
                set.insert(block);
            }
        }

        return true;
    }
};