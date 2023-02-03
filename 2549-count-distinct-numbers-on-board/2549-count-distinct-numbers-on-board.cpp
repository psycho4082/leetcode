class Solution {
public:
   int f(int n ,int &counter, vector<int>&v){
       
       if(n== 2 || n== 1){
           return 0;
       }
       
        for(int i = 1 ; i<n;i++){
            if(n%i == 1 && find(v.begin(),v.end(),i) ==v.end()){
                counter++;
                v.push_back(i);
             f(i,counter,v);
            }
            
        }
       return counter ; 
        
    }
    
    
    int distinctIntegers(int n) {
      int counter = 1 ;
        vector<int>v;
        if(n == 1 || n==2){
            return 1;
        }
        return f(n,counter,v);
    }
};