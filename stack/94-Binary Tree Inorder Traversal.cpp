//
// Created by shuxnhs on 18-12-3.
//二叉树的中序遍历的迭代算法
//
#include <iostream>
#include <stack>
#include <vector>

using  namespace std;

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode *>stack1;
        TreeNode * p=root;
        while(p||!stack1.empty())
        {
            while(p)
            {
                stack1.push(p);
                p = p->left;
            }
            if(!stack1.empty())
            {
                p = stack1.top();
                stack1.pop();
                result.push_back(p->val);
                p = p->right;
            }
        }
        return result;
    }

};
int main(){
    int a[] = {1, NULL ,2,3};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));
    vector<int> result;
    Solution solution;
    result=solution.inorderTraversal(p);
    //输出vector
    for (int &it : result) {
        cout<< it <<"   ";
    }
    cout<<endl;


}
