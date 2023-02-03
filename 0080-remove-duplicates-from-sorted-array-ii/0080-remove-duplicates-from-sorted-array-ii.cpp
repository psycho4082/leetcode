class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), i = 1, pos = 1, c = 1;

        while(i<n){
            if(c < 2 && nums[i] == nums[i-1]){
                nums[pos] = nums[i];
                i++, pos++, c++;
            }
            else if(nums[pos-1] != nums[i]){
                nums[pos] = nums[i];
                i++, pos++, c = 1;
            }
            else {
                while(i<n && nums[pos-1] == nums[i]) i++ ;
                c = 0;
            }
        }
        return pos;
    }
};