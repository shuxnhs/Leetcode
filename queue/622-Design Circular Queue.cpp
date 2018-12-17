//
// Created by shuxnhs on 18-12-17.
//设计循环队列
//

#include <iostream>
#include <vector>
using  namespace std;


class MyCircularQueue {
protected:
    const int maxSize;
    vector<int> v;
    int front = 0;
    int rear = 0;

public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) : maxSize(k+1), v(k+1,0){

        //循环队列中最多只能存放maxSize-1个元素，
        //因此初始化要存放k个元素的双端队列，必须让maxSize=k+1


    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    //进队，判断队列是否已满
    //将值插入队尾，队尾rear向前加1，rear=(rear+1)%maxSize
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }else{
            v[rear]=value;
            rear=(rear+1)%maxSize;
            return true;
        }

    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    //    出队，判断队列是否为空
    //    队头向前加1，front=(front+1)%maxSize;
    bool deQueue() {
        if(isEmpty()){
            return false;
        } else{
            front=(front+1)%maxSize;
            return true;
        }

    }

    /** Get the front item from the queue. */
    //    获取队首的值
    int Front() {
        if(isEmpty()){
            return -1;
        } else{
            return v[front];
        }

    }

    /** Get the last item from the queue. */
    //    输出队尾v[(rear+maxSize-1)%maxSize]
    int Rear() {
        if(isEmpty()){
            return -1;
        } else{
            return v[(rear+maxSize-1)%maxSize];
        }

    }

    /** Checks whether the circular queue is empty or not. */
    //如果rear==front表示队列为空
    bool isEmpty() {
        return front == rear;

    }

    /** Checks whether the circular queue is full or not. */
    //如果(rear + 1) % maxSize == front表示队列已满
    bool isFull() {
        return (rear + 1) % maxSize == front;

    }

    //求循环队列中元素的个数(rear-front+maxSize)%maxSize
    int getSize(){
        return (rear-front+maxSize)%maxSize;
    }
};


int main() {
    MyCircularQueue myCircularQueue(6);
    myCircularQueue.enQueue(1);
    myCircularQueue.enQueue(2);
    myCircularQueue.enQueue(3);
    cout<<myCircularQueue.deQueue();
    cout<<myCircularQueue.Front();
    cout<<myCircularQueue.Rear();
    cout<<myCircularQueue.isEmpty();
    cout<<myCircularQueue.isFull();
    cout<<myCircularQueue.getSize();

}
