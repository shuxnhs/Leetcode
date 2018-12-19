//
// Created by shuxnhs on 18-12-18.
//给定一个二叉树，找出其最大宽度。
//


#include <iostream>
#include <deque>
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

    int widthOfBinaryTree(TreeNode* root) {
        if (!root)  return 0;

        int maxWidth = 0;
        deque<TreeNode*> deque1;
        deque1.push_back(root);

        while (!deque1.empty()) {

            int len = deque1.size();

            maxWidth = len > maxWidth ? len : maxWidth;
            //将每一层的结点入站
            for (int i=0; i<len; ++i) {
                TreeNode* n = deque1.front();
                deque1.pop_front();
                if (n) {
                    deque1.push_back(n->left);
                    deque1.push_back(n->right);
                } else {
                    deque1.push_back(NULL);
                    deque1.push_back(NULL);
                }
            }

            while (!deque1.empty()) {
                if (deque1.back() == NULL)      deque1.pop_back();
                else break;
            }
            while (!deque1.empty()) {
                if (deque1.front() == NULL)     deque1.pop_front();
                else break;
            }
        }
        return maxWidth;

    }



};
int main() {
    Solution solution;

    int a[] = {3,9,20,NULL,NULL,15,7};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));

    cout<<solution.widthOfBinaryTree(p);

}



