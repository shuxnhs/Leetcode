//
// Created by shuxnhs on 18-12-3.
// 判断栈序列
//
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stack1;
        int i=0;
        int j=0;
        while (i<pushed.size()){
            stack1.push(pushed[i]);
            i++;
            while (!stack1.empty() && stack1.top()==popped[j]){
                stack1.pop();
                j++;
            }
        }

        return stack1.empty();

    }
};
int main(){

    Solution solution;
    vector<int> pushed={1,2,3,4,5};
    vector<int> popped={4,5,3,2,1};
    cout << solution.validateStackSequences(pushed, popped);

}

