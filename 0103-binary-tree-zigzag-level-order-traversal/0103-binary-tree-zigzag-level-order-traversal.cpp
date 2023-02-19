class Solution {
public:
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>>ans; 
    if(root == NULL){
        return ans ; 
    }
    queue<TreeNode*>q;
    int flag = 1; 
    q.push(root);
    while(!q.empty()){
       vector<int>level ; 
       int size = q.size();
       for(int i = 0 ; i<size ; i++){   
       TreeNode* node = q.front();
       q.pop();
       if(node->right != NULL){
           q.push(node->right);
       }
         if(node->left != NULL){
           q.push(node->left);
       }
       level.push_back(node->val);
    }
    if(flag == 1){
    reverse(level.begin(),level.end());
  flag = 0 ;
     ans.push_back(level);
    }
    else {
        flag =1 ;
           ans.push_back(level);
    }
 
    }
    return ans ; 
  }
  
  };