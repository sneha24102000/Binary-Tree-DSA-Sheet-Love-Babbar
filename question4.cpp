Diameter of Binary Tree -


class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
    int ma;
    
    int func(Node* root)
    {
        if(!root) return 0;
        int x = func(root->left);
        int y = func(root->right);
        ma = max(ma,x+y+1);
        return (max(x,y)+1);
    }
    int diameter(Node* root)
    {
    // Your code here
    ma = INT_MIN;
    int x = func(root);
    return ma;
    
    }

};