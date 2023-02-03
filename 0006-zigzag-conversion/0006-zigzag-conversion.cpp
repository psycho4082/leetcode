class Solution {
public:
    string convert(string st, int r) {
        int s = st.length();
      if(r>s||r == 1){
          return st;
      }
        vector<string>v(r);
        int i = 0 ;int j = 0 ;
        while(j<st.length()){
        while(i<r && j<s){
            v[i++] += st[j++];
        }
            
        if(i == r)
        {  i -=2;
        }
        while(i>=0 && j<s ){
            v[i--] += st[j++];
        }
        if(i == -1){
            i = 1;
        }
        
        }
      string ans = "";
        for(int i = 0 ;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
    }
};