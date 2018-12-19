//
// Created by shuxnhs on 18-12-19.
//翻转二叉树
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

    //递归
    TreeNode* invertTree(TreeNode* root) {

        if(!root) return root;

        invertTree(root->left);
        invertTree(root->right);

        TreeNode *temp=root->left;

        root->left=root->right;
        root->right=temp;
        return root;

    }

    //非递归
    TreeNode* invertTree2(TreeNode* root){
        if(!root) return root;

        vector<TreeNode*> stack;
        stack.push_back(root);
        while (!stack.empty()) {
            TreeNode* node = stack.back();
            stack.pop_back();
            swap(node->left, node->right);
            if (node->left)     stack.push_back(node->left);
            if (node->right)    stack.push_back(node->right);
        }
        return root;
    }

    void print(TreeNode* root, ostream& out){
        if(root !=NULL){
            out<<root->val;

            print(root->left, out);
            print(root->right,out);


        }
    }

};
int main() {
    Solution solution;

    int a[] = {4,2,7,1,3,6,9};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));

    TreeNode* q1=solution.invertTree(p);
    TreeNode* q2=solution.invertTree2(p);

    if(q1==q2) {
        cout<<"yes"<<endl;
    }



}





