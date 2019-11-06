    bool isLeftAndRightSymmetricTreeNode(TreeNode* left, TreeNode* right){
        cout << "left " << left << endl;
        cout << "left " << right << endl;

        if(left == NULL || right == NULL) return (left == NULL && right == NULL);
        
        return (left->val == right->val) && isLeftAndRightSymmetricTreeNode(left->left, right->right) && isLeftAndRightSymmetricTreeNode(left->right, right->left);
    }

    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        
        return isLeftAndRightSymmetricTreeNode(root->left, root->right);
    }
