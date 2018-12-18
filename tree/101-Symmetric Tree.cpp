//
// Created by shuxnhs on 18-12-18.
//判断树是否对称
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

    bool checkEquarl(TreeNode* left, TreeNode* right){
        if((!left)&&(!right))                           return true;

        else if(( !left && right)||( left && !right))   return false;

        else{

            if( left->val!=right->val)                   return false;
            else {
                return checkEquarl(left->left,right->right)&&checkEquarl(left->right,right->left);
            }
        }

    }

    bool isSymmetric(TreeNode* root) {
        TreeNode *p=root;
        if(!p)  return true;
        else{
            return checkEquarl(p->left,p->right);
        }


    }

};
int main() {
    Solution solution;

    int a[] = {1,2,2,NULL,3,NULL,3};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));

    cout<<solution.isSymmetric(p);

    int b[] = {1,2,2,3,4,4,3};
    TreeNode* r = createTree(b, sizeof(b)/sizeof(int));
    cout<<solution.isSymmetric(r);
    cout<<endl;
}