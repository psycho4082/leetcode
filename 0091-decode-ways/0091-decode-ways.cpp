class Solution {
public:
    int f(int i,string &s,vector<int>&dp){
        int n=s.size();
        if(s[i]=='0') return 0;
        if(i==n) return 1;
        if(dp[i]!=-1) return dp[i];
        int res=f(i+1,s,dp);
        if(i<n-1 && (s[i]=='1' || s[i]=='2' && s[i+1]<='6'))
            res=(res+f(i+2,s,dp));
        return dp[i]=res;
    }
    int numDecodings(string s) {
        vector<int>dp(s.size()+1,-1);
		return f(0,s,dp);
    }
};