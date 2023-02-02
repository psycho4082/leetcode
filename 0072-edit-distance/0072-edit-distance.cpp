class Solution {
public:
////// MEMOIZATION (1-based indexing)
    // int f(int i ,int j,string s, string t, vector<vector<int>> &dp){
    //     if(i==0) return j;
    //     if(j==0) return i;
    //     if(dp[i][j] != -1 ) return dp[i][j];
    //     if(s[i-1] == t[j-1]){
    //         return 0 + f(i-1,j-1,s,t,dp);
    //     }
    //     int ins = 1 + f(i,j-1,s,t,dp);
    //     int del = 1 + f(i-1,j,s,t,dp);
    //     int rep = 1 + f(i-1,j-1,s,t,dp);
    //     return dp[i][j] = min( ins , min(del,rep) );
    // }
    // int minDistance(string s, string t) {
    //     int m = s.size() , n = t.size();
    //     vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
    //     return f(m,n,s,t,dp);
    // }
///////  TABULATION
    int minDistance(string s, string t) {
        int m = s.size() , n = t.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<=m;i++) dp[i][0] = i;
        for(int j=0;j<=n;j++) dp[0][j] = j;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 0 + dp[i-1][j-1];
                }
                else{
                    int ins = 1 + dp[i][j-1];
                    int del = 1 + dp[i-1][j];
                    int rep = 1 + dp[i-1][j-1];
                    dp[i][j] = min( ins , min(del,rep) );
                } 
            }
        }
        return dp[m][n];
    }

};