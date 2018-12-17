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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)    {
            return true;
        }
        else if ((p&& !q)||(!p && q)) {
            return false;
        }
        else {
            return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right) && (p->val==q->val));
        }


    }
};
int main() {
    int a[] = {1, NULL ,2,3};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));
    TreeNode* q = createTree(a, sizeof(a)/sizeof(int));
    Solution solution;
    cout<<solution.isSameTree(p,q);
    cout<<endl;
}