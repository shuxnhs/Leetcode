//
// Created by shuxnhs on 18-12-5.
//
#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> stack1;
        for (int i=0 ; i<tokens.size(); i++){
            if(tokens[i]=="+"){

                int temp=stack1.top();
                stack1.pop();
                int temp2=stack1.top()+ temp;
                stack1.pop();
                stack1.push(temp2);

            }
            else if(tokens[i]=="-"){

                int temp=stack1.top();
                stack1.pop();
                int temp2=stack1.top()- temp;
                stack1.pop();
                stack1.push(temp2);

            }

            else if(tokens[i]=="*"){

                int temp=stack1.top();
                stack1.pop();
                int temp2=stack1.top()* temp;
                stack1.pop();
                stack1.push(temp2);

            }
            else if(tokens[i]=="/"){

                int temp=stack1.top();
                stack1.pop();
                int temp2=stack1.top()/temp;
                stack1.pop();
                stack1.push(temp2);

            } else{

                stack1.push(stoi(tokens[i]));
            }

        }

        return stack1.top();


    }
};
int main(){
    Solution solution;
    vector <string> s={"2", "1", "+", "3", "*"};
    cout<<solution.evalRPN(s);

}

