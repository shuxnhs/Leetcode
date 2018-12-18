//
// Created by shuxnhs on 18-12-18.
//给定一个二叉树，找出其最小深度。
//


#include <iostream>
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

    int minDepth(TreeNode* root) {

        if(!root) return 0;
        int left=minDepth(root->left);
        int right=minDepth(root->right);

        if(left==0||right==0){
            //left为0，返回right+1=left+right+1
            //right为0，返回left+1=left+right+1
            return left+right+1;
        }
        return min(left,right)+1;

    }



};
int main() {
    Solution solution;

    int a[] = {3,9,20,NULL,NULL,15,7};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));

    cout<<solution.minDepth(p);

}



