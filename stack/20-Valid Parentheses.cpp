//
// Created by shuxnhs on 18-12-3.
//验证输入的{}[]()是否匹配
//
#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack1;
        for(int i=0; i<s.size();i++)
        {
            char c=s[i];

            if(c=='('||c=='['||c=='{'){
                stack1.push(c);
            }

            else if(c==')'){
                if(!stack1.empty() && stack1.top()=='(' ){
                    stack1.pop();
                }else{
                    return false;
                }
            }

            else if(c==']'){
                if(!stack1.empty() && stack1.top()=='[' ){
                    stack1.pop();
                }else{
                    return false;

                }
            }

            else if(c=='}'){
                if(!stack1.empty() && stack1.top()=='{' ){
                    stack1.pop();
                }else{
                    return false;

                }
            }
        }
        return stack1.empty();


    }


};

int main(){

    string s="()[]";
    string s2="([]";
    Solution solution;
    cout<<solution.isValid(s);
    cout<<solution.isValid(s2);

}
