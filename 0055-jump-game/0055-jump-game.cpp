class Solution {
public:
    bool canJump(vector<int>& nums) {
     int target=0;

     for(int i=0; i<=target; i++){
target= max(target, i+nums[i]);

if(target>=nums.size()-1){
return true;
}
     }   
   return false;
    }
};