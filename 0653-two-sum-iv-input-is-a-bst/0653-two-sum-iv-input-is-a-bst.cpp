class Solution {
public:
    void inOrder(TreeNode* root, vector<int>& ans) {

        if(!root) {
            return;
        }

        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }

    bool findTarget(TreeNode* root, int k) {

        if(!root) {
            return false;
        }

        vector<int> ans;
        inOrder(root, ans);

        for(int i = 0; i < ans.size(); i++) {

            for(int j = i + 1; j < ans.size(); j++) {

                if(ans[i] + ans[j] == k) {
                    return true;
                }
            }
        }

        return false;
    }
};