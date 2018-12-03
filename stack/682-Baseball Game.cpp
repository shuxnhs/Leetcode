//
//计算包含CD+操作的栈的值
//string转int函数：int =stoi（string）
// Created by shuxnhs on 18-12-3.
//
#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stack1;
        for(int i=0; i<ops.size(); i++){
            if(ops[i]=="C"){
                stack1.pop();
            }
            else if(ops[i]=="D"){
                int temp=stack1.top();
                stack1.push(temp*2);

            }
            else if(ops[i]=="+"){
                int temp1=stack1.top();
                stack1.pop();
                int temp2=stack1.top();
                stack1.push(temp1);
                stack1.push(temp1+temp2);
            } else{
                stack1.push(stoi(ops[i]));

            }
        }


        int result=0;
        while(!stack1.empty()){
            result+=stack1.top();
            stack1.pop();
        }
        return result;

    }
};
int main(){
    vector<string> s={"5","2","C","D","+"};
    Solution solution;
    cout<<solution.calPoints(s);
}

