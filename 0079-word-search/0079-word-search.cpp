class Solution {
public:
    bool verdict = false;
    int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    bool is_valid(int x, int y, int m, int n)
    {
        return (x >= 0 && y >= 0 && x < m && y < n);
    }

    void dfs(vector<vector<char>> &board, int x, int y, int &m, int &n, string &s, int idx)
    {
        if(verdict == true) return;
        if(idx == s.size()) 
        {
            verdict = true;
            return;
        }

        for(auto &d: dirs)
        {
            int i = x + d[0];
            int j = y + d[1];
            if(is_valid(i, j, m, n) && board[i][j] == s[idx])
            {
                board[i][j] = '.';
                dfs(board, i, j, m, n, s, idx + 1);
                board[i][j] = s[idx];
            }
        }
    }

    bool exist(vector<vector<char>>& board, string &word) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i ++)
        {
            for(int j = 0; j < n; j++)
            {
                if(word[0] == board[i][j])
                {
                    board[i][j] = '.';
                    dfs(board, i, j, m, n, word, 1);
                    board[i][j] = word[0];
                }

                if(verdict == true) return true;
            }
        }
        return false;
    }
};