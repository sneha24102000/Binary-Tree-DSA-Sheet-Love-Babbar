Height Of A Tree-
 
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        // code here 
        if(!root) return 0;
        int x = height(root->left); 
        int y = height(root->right);
        return (max(x,y)+1);
        
    }
};