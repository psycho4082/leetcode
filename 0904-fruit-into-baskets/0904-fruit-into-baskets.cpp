class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0 ;
        int maxi = 0 ;
       map<int,int>mp;
        for(int i =0; i<fruits.size();i++){
            
            mp[fruits[i]]++;
                while(mp.size()>2){
                    
                    mp[fruits[left]]--;
                    if(mp[fruits[left]] == 0)
                    {
                        mp.erase(fruits[left]);
                    }
                    left++;
                }
            maxi = max(maxi,i-left+1); 
            
        }
        return maxi ;
        
    }
};