//
// Created by shuxnhs on 18-12-4.
//双端队列
//queue1.push_back();   尾插入
//queue1.push_front();  头插入
//queue1.pop_back();    尾弹出
//queue1.pop_front();   头弹出
//
#include <iostream>
#include <vector>
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if(!root){
            return result;
        }

        //尾插入根节点
        deque<TreeNode *> queue1;
        queue1.push_back(root);

        int height = 0;
        int numOfChild = 1;

        while(!queue1.empty()){

            vector<int> vec;
            numOfChild = queue1.size();
            for(int i = 0; i < numOfChild; i++) {
                TreeNode *node;
                //从左到右
                if(height%2 == 0){
                    //访问队列尾结点
                    node = queue1.back();
                    queue1.pop_back();
                    

                    if(node->left != NULL){
                        queue1.push_front(node->left);
                    }
                    if(node->right != NULL){
                        queue1.push_front(node->right);
                    }

                }else{

                    node  = queue1.front();
                    queue1.pop_front();
                    if(node->right != NULL){
                        queue1.push_back(node->right);
                    }
                    if(node->left != NULL){
                        queue1.push_back(node->left);
                    }
                }
                vec.push_back(node->val);
            }

            height++;

            result.push_back(vec);


        }


        return result;

    }
};
int main(){
    int a[] = {3,9,20,NULL,NULL,15,7};
    TreeNode* p = createTree(a, sizeof(a)/sizeof(int));
    vector<vector<int>> result;
    Solution solution;
    result=solution.zigzagLevelOrder(p);
    //输出vector
    for (vector<int> &it : result) {
        for(int &itt:it){
            cout<< itt <<"   ";
        }
    }
    cout<<endl;


}

