//
// Created by shuxnhs on 18-12-18.
//设计循环双端队列
//


#include <iostream>
#include <vector>
using  namespace std;


class MyCircularDeque {
protected:
    const int maxSize;
    vector<int> v;
    int front = 0;
    int rear = 0;
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k):maxSize(k+1), v(k+1,0){

    }

    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(isFull()){
            return false;
        } else{
            front=(front-1+maxSize)%maxSize;
            v[front]=value;
            return true;
        }


    }

    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(isFull()){
            return false;
        } else{
            v[rear]=value;
            rear=(rear+1)%maxSize;
            return true;
        }

    }

    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(isEmpty()){
            return false;
        } else{
            front=(front+1)%maxSize;
            return true;
        }


    }

    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(isEmpty()){
            return false;
        } else{
            rear=(rear-1+maxSize)%maxSize;
            return true;
        }


    }

    /** Get the front item from the deque. */
    int getFront() {
        if(isEmpty()){
            return -1;
        } else{
            return v[front];
        }


    }

    /** Get the last item from the deque. */
    int getRear() {
        if(isEmpty()){
            return -1;
        }else{
            return v[(rear+maxSize-1)%maxSize];
        }

    }

    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return rear == front;

    }

    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return (rear+1)%maxSize==front;

    }
    //求双端循环队列中元素的个数(rear-front+maxSize)%maxSize
    int getSize(){
        return (rear-front+maxSize)%maxSize;
    }
};


int main() {
    MyCircularDeque myCircularDeque(4);

    cout<<myCircularDeque.isEmpty();  //1

    myCircularDeque.insertFront(1);
    myCircularDeque.insertFront(2);
    myCircularDeque.insertLast(3);
    myCircularDeque.insertLast(4);

    cout<<myCircularDeque.getFront();   //2
    cout<<myCircularDeque.getRear();    //4

    cout<<myCircularDeque.isEmpty();    //0
    cout<<myCircularDeque.isFull();     //1

    myCircularDeque.deleteFront();
    myCircularDeque.deleteLast();

    cout<<myCircularDeque.isFull();     //0
    cout<<myCircularDeque.getFront();   //1
    cout<<myCircularDeque.getRear();    //3
    cout<<myCircularDeque.getSize();    //2


}

