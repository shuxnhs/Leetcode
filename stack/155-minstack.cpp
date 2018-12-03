//最小栈
#include <iostream>
#include <stack>
using namespace std;
class MinStack {

private:
    stack<int> s;
    stack<int> min;


public:
    MinStack(){

    }


    void push(int x) {

        s.push(x);
        //如果x比最小栈栈顶小或者最小栈为空则入最小栈
        if(min.empty()||x<=min.top()){
            min.push(x);
        }
    }

    void pop() {
        if(s.top()==min.top()){
            //如果最小栈与s栈顶相同，pop也应该一起pop出来
            min.pop();
        }
        s.pop();

    }

    int top() {
        return s.top();


    }

    int getMin() {

        return min.top();

    }

};

int main(){
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    minStack.getMin();   //Returns -3.
    minStack.pop();
    minStack.top();      // Returns 0.
    minStack.getMin();   //Returns -2.

}


