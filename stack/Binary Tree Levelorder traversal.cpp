//
// Created by shuxnhs on 18-12-4.
//二叉树的层序遍历
//

#include <iostream>
#include <vector>
#include <queue>

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
    vector<int> zigzagLevelOrder(TreeNode* root) {
        vector<int> result;

        if(!root){
            return result;
        }


        queue<TreeNode *> queue1;
        TreeNode *p=root;
        //根节点入队
        queue1.push(p);


        while(!queue1.empty()){

            //退出队列首节点并输出到vector中
            p=queue1.front();
            queue1.pop();
            result.push_back(p->val);

            //左子结点入队
            if(p->left!= nullptr){
                queue1.push(p->left);
            }
            //右子结点入队
            if(p->right!= nullptr){
                queue1.push(p->right);
            }

        }





        return result;

    }
};
int main(){
    int a[] = {3,9,20,NULL,NULL,15,7};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));
    vector<int> result;
    Solution solution;
    result=solution.zigzagLevelOrder(p);
    //输出vector
    for (int &it : result) {
            cout<< it <<"   ";
    }
    cout<<endl;


}

