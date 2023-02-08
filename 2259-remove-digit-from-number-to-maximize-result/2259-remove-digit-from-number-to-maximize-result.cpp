class Solution {
public:
    string removeDigit(string num, char digit) {
        
           string maxi  = "";
    int n = num.size();
        string temp = num;
        string s; 
        for(int i = 0;i<n;i++){
            if(temp[i] == digit){
               temp.erase(temp.begin()+i);
               maxi =  max(temp,maxi);
                temp = num;
                
                
            }
         
           
    }
            return maxi ; 
    
    }
        
    
};