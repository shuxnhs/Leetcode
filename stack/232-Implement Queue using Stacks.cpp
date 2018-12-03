//用栈来实现队列
#include <iostream>
#include <stack>
using namespace std;
class MyQueue {
private:
    stack<int> stack1, stack2;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        stack1.push(x);

    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(stack2.empty()){
            while (!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int result=stack2.top();
        stack2.pop();
        return result;

    }

    /** Get the front element. */
    int peek() {
        if(stack2.empty()){
            while (!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        return stack2.top();

    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return stack1.empty() && stack2.empty();
    }

};

int main(){

    MyQueue obj;
    obj.push(2);
    int param_2 = obj.pop();
    int param_3 = obj.peek();
    bool param_4 = obj.empty();
    cout<<param_2<<" "<<param_3<<" "<<param_4<<endl;

}


