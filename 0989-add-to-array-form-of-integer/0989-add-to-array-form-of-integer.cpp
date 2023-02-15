class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        reverse(num.begin(),num.end());
        
        //storing k digitwise in new vector "num2"
        vector<int> num2;
        while(k){
            num2.push_back(k%10);
            k/=10;
        }
        
        //initialising empty vector "ans"
        vector<int> ans;
        int i=0,carry=0,temp;
        
        //till both vector contain ith digit
        while(i<min(num.size() ,num2.size())){
            temp= num[i]+num2[i]+carry;
            carry= temp/10;
            ans.push_back(temp%10);
            i++;
        }
        
        //if i is greater than one of any vectors size
        while(i<num.size()){
            temp= num[i]+carry;
            carry= temp/10;
            ans.push_back(temp%10);
            i++;
        }
        while(i<num2.size()){
            temp= num2[i]+carry;
            carry= temp/10;
            ans.push_back(temp%10);
            i++;
        }
        
        if(carry>0) ans.push_back(carry);
        
        //reversing final ans vector
        reverse(ans.begin(),ans.end());
        return ans;
    }
};