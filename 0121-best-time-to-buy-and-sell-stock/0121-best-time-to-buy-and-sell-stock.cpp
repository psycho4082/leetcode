class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max =INT_MIN;
        int j =prices[0];
        int counter =0;
        int n = prices.size();
        for(int i = 1;i<n;i++){
               if(prices[i]<j){
                j = prices[i];
                   counter++;
            }
            else{
                if((prices[i]-j)>max){
                    max = prices[i] -j;
                }
                    
            }
        }
        if(counter+1 == n){
            return 0;
        }
        // int s = prices[1];
        return max;
        
    }
};