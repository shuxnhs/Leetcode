//
// Created by shuxnhs on 18-12-18.
//叶子相似的树
//


#include <iostream>
#include <stack>
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

    void dfs(TreeNode * node, stack<int>&stack1){
        if(!node->left && !node->right){
            stack1.push(0);
        }
        if(node->right)  dfs(node->right,vector1);
        if(node->left)   dfs(node->left,vector1);

    }






    int findTilt(TreeNode* root) {
        stack<int> stack1;
        int Tilt=0;
        dfs(root,stack1);
        //TODO:计算stack中的和
        while (!stack1.empty()){
            Tilt+=stack1.top();
            stack1.pop();
        }
        return Tilt;

    }



};
int main() {
    Solution solution;

    int a[] = {3,9,20,NULL,NULL,15,7};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));

    cout<<solution.findTilt(p);

}



