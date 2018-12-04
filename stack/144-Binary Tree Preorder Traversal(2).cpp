//
// Created by shuxnhs on 18-12-3.
//二叉树的前序遍历的递归算法
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

//创建树
TreeNode* createTree(int a[], int n)
{
    if (n<=0) return nullptr;

    TreeNode **tree = new TreeNode*[n];

    for(int i=0; i<n; i++) {
        if (a[i]==0 ){
            tree[i] = nullptr;
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;

        if (!root) return result;

        result.push_back(root->val);

        vector<int> temp=preorderTraversal(root->left);
        if(!temp.empty()){
            for (int i : temp) {
                result.push_back(i);
            }

        }

        vector<int> temp2=preorderTraversal(root->right);
        if(!temp2.empty()){
            for (int j : temp2) {
                result.push_back(j);
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
    result=solution.preorderTraversal(p);
    //输出vector
    for (int &it : result) {
        cout<< it <<"   ";
    }
    cout<<endl;


}

