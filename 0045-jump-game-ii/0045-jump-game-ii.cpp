class Solution {
public:
    int jump(vector<int>& nums) {
        
        int curreach = 0 ;
        int currmax = 0 ;
        int jump = 0 ;
        for(int i =0;i<nums.size()-1;i++){
            if(i+nums[i]>currmax){
                currmax = i+nums[i];
        
            }
            if(i == curreach){
                jump++;
                curreach = currmax;
                
            }
         
               }
        return jump;
    }
};