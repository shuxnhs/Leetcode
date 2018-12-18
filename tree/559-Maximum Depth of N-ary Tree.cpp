//
// Created by shuxnhs on 18-12-18.
//给定一个N叉树，找出其最大深度。
//


#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};



class Solution {
public:

    int maxDepth(Node* root) {

        if(!root) return 0;
        else{
            int result=1;
            for(Node* child : root->children){
                result=max(result,maxDepth(child)+1);
            }
            return result;
        }
    }



};
int main() {
    Solution solution;

    Node* n5 = new Node(5, {});
    Node* n6 = new Node(6, {});
    Node* n3 = new Node(3, {n5, n6});
    Node* n2 = new Node(2, {});
    Node* n4 = new Node(4, {});
    Node* n1 = new Node(1, {n3, n2, n4});

    cout<<solution.maxDepth(n1);

}



