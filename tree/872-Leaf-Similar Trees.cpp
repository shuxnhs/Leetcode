//
// Created by shuxnhs on 18-12-18.
//叶子相似的树
//


#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* createTree(int a[], int n)
{
    if (n<=0) return NULL;

    TreeNode **tree = new TreeNode*[n];

    for(int i=0; i<n; i++) {
        if (a[i]==0 ){
            tree[i] = NULL;
            continue;
        }
        tree[i] = new TreeNode(a[i]);
    }
    int pos=1;
    for(int i=0; i<n && pos<n; i++) {
        if (tree[i]){
            tree[i]->left = tree[pos++];
            if (pos<n){
                tree[i]->right = tree[pos++];
            }
        }
    }
    return tree[0];
}



class Solution {
public:

    void dfs(TreeNode * node, vector<int>&vector1){
        if(!node->left && !node->right){
            vector1.push_back(node->val);
            return;
        }
        if(node->right)  dfs(node->right,vector1);
        if(node->left)   dfs(node->left,vector1);

    }



    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> vector1,vector2;

        dfs(root1,vector1);
        dfs(root2,vector2);

        return vector1==vector2;


    }



};
int main() {
    Solution solution;

    int a[] = {3,9,20,NULL,NULL,15,7};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));

    int b[] = {3,9,20,15,7};
    TreeNode* q = createTree(b, sizeof(b)/sizeof(int));

    cout<<solution.leafSimilar(p,q);

}



