class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,int>mp;
        int count = INT_MAX ;
        int maxi = INT_MAX;
        int n = cards.size();
        int i ;
        int flag =0 ; 
        for(i =0; i<n;i++){
        if(mp.find(cards[i])!= mp.end()){
          count = i-mp[cards[i]]+1;
            maxi = min(maxi,count);
           
            }
             mp[cards[i]]=i;

            
        }
        if(maxi == INT_MAX){
              return -1;
        }
        return maxi ; 
      
    }
};