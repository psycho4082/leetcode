class Solution {
public:
    int countOdds(int low, int high) {
        
        if(low%2 == 0 && high%2 == 0){
            return (high-low)/2;
            
        }
        else{
            int tem = (high-low)/2;
            return tem +1;
        }
    }
};