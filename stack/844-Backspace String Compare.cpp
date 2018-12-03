//
// Created by shuxnhs on 18-12-3.
//比较两个包含退格#的序列是否一致
//
#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> stack1;
        stack<char> stack2;

        for (int i = 0; i < S.size(); i++) {
            char c = S[i];
            if (c != '#') {
                stack1.push(c);
            } else {
                if (!stack1.empty()) {
                    stack1.pop();
                }
            }
        }

        for (int j = 0; j < T.size(); j++) {
            char c = T[j];
            if (c != '#') {
                stack2.push(c);
            } else {
                if (!stack2.empty()) {
                    stack2.pop();
                }
            }
        }

        return stack1 == stack2;
    }




};
int main(){
    string s="";
    string t="";
    Solution solution;
    cout<<solution.backspaceCompare(s,t);
}
