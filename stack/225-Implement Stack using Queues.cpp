#include <iostream>
#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> queue1,queue2;
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        queue1.push(x);

    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        //出栈即出队列尾部,先出队到queue2，再把queue2返回1
        int length1=queue1.size();
        int temp;
        int result;
        for(int i=0; i<length1-1; i++){

            temp=queue1.front();
            queue2.push(temp);
            queue1.pop();
        }

        result=queue1.front();
        queue1.pop();

        int j=0;
        int length2=queue2.size();
        while(j<length2){
            temp=queue2.front();
            queue1.push(temp);
            queue2.pop();
            j++;
        }

        return result;



    }

    /** Get the top element. */
    int top() {
        //获取栈顶即队列尾部
        return queue1.back();

    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return queue1.empty();

    }
};
int main()
{
    MyStack obj;
    obj.push(2);
    int param_2 = obj.pop();
    int param_3 = obj.top();
    bool param_4 = obj.empty();
    cout<<param_2<<" "<<param_3<<" "<<param_4<<endl;
}