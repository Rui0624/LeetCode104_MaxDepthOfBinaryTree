//
//  MaxDepthOfBinaryTree.cpp
//  
//
//  Created by Rui on 8/21/17.
//
//

#include "MaxDepthOfBinaryTree.hpp"
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)
        {
            return 0;
        }
        
        int depthLeft = maxDepth(root->left);
        int depthRight = maxDepth(root->right);
        
        if(depthLeft > depthRight)
        {
            return depthLeft + 1;
        }else
        {
            return depthRight + 1;
        }
    }
};
