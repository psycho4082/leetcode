class Solution {
public:
    
    int f(int t,int n,vector<int>& nums,vector<vector<int>>&dp){
      if(n == 0){  
     if(t==0 && nums[0] == 0 )return 2;
      if(t==0 || t ==nums[0])return 1;
        return 0 ;
      }
      if(dp[n][t]!=-1){
          return dp[n][t];
      }
          int nopick = f(t,n-1,nums,dp);
        int pick = 0;
        if(nums[n]<=t) pick = f(t-nums[n],n-1,nums,dp);
     
      return dp[n][t] =  nopick + pick ; 
      
    }
    
 int findWays(vector<int> &num, int tar)
{
    // Write your code here.
      int n = num.size();
        vector<vector<int>>dp(n,vector<int>(tar+1,-1));
      return   f(tar,n-1,num,dp);
}
   
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
     int totalsum = 0 ;
        for(auto &it:nums)totalsum +=it ; 
        if(totalsum -target <0 || (totalsum-target)%2)return false ;
        return findWays(nums,(totalsum-target)/2);
        
        
    }
};