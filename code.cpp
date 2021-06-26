/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    set<int>A;
    void inorder(TreeNode *root)
    {
        if(root)
        {
            inorder(root->left);
            A.insert(root->val);
            inorder(root->right);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
       inorder(root); 
        vector<int>B;
        if(A.size()<2)
        {
            return -1;
        }
        else
        {
            for(auto s:A)
            {
                B.push_back(s);
            }
            return B[1];
        }
        return -1;
    }
};
