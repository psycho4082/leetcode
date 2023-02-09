class Solution {
public:
    void FindSet(int ind,vector<vector<int>>& ans, vector<int>& ds, vector<int>& nums){
        ans.push_back(ds);
        if(ind>=nums.size()){
            return;
        }
        for(int i=ind; i<nums.size(); i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            FindSet(i+1,ans,ds,nums);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        // ans.push_back(ds);
        FindSet(0,ans,ds,nums);
        return ans;
    }
};