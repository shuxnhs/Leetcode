//
// Created by 何晓宏 on 2018/10/29.
//
#include<iostream>
#include<stack>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    //初始化当前结点的值为x，指针为空
    ListNode(int x):val(x),next(0){}
};
class Solution{
public:

    //创建链表
    ListNode* createList(int a[], int n){
        ListNode *head=0, *p=0;
        for(int i=0; i<n; i++){
            if(head==0){
                head=p=new ListNode(a[i]);
            } else{
                p->next=new ListNode(a[i]);
                p=p->next;
            }
        }
        return head;
    }

    //反转链表
    ListNode* reverseList(ListNode* head){

        ListNode* p=head;
        stack<int>s;

        while(p!=0){
            s.push(p->val);
            p=p->next;
        }

        //p移到head，将栈pop出来后又赋值进去
        p = head;
        while(p!=0){
            p->val=s.top();
            
            p=p->next;
            s.pop();
        }

        return head;

    }



    //输出链表
    void printList(ListNode *p){

        while (p != 0){
            cout<<p->val;
            p=p->next;
        }

    }
};

int main(){

    int a[]={1,2,3,4,5};
    Solution solution;
    cout<<"开始序列为:";
    solution.printList(solution.createList(a,5));
    cout<<endl;

    cout<<"反转后序列为:";
    solution.printList(solution.reverseList(solution.createList(a,5)));
    cout<<endl;


 
    return 0;
}

