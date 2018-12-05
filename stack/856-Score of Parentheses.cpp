//
// Created by shuxnhs on 18-12-5.
//

//
// Created by shuxnhs on 18-12-5.
//
#include <iostream>
#include <stack>
#include <string>

using namespace std;
class Solution {
public:
    int scoreOfParentheses(string S) {
        int result=0;
        stack<int> stack1;

        for (int i=0 ; i<S.size(); i++){
            if(S[i]=='('){
                if(S[i+1]==')'){
                    result+=1;
                    i++;
                } else{
                    stack1.push(result);
                    result=0;
                }
            }
            
            else if(S[i]==')'){
                result*=2;
                result +=stack1.top();
                stack1.pop();

            }


        }

        return result;

    }
};
int main(){
    Solution solution;
    string s={"(()(()))"};
    cout<<solution.scoreOfParentheses(s);

}



