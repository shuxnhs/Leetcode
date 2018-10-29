//
// Created by 何晓宏 on 2018/10/29.
//
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    //初始化当前结点的值为x，指针为空
    ListNode(int x):val(x),next(NULL){}
};

ListNode *createList(int n){

    ListNode head(-1);
    ListNode *prev=&head;
    int val;
    for (int i = 0; i < n; ++i) {
        cin >> val ;
        prev->next = new ListNode(val);
        prev = prev->next;
    }
    prev->next = nullptr;
    return head.next;
}

//定义两个指针，一个是另一个移动的速度的两倍
class  Solution{

public:

    //创建链表
    ListNode* createList(int a[], int n){
        ListNode *head=NULL, *p=NULL;
        for(int i=0; i<n; i++){
            if(head==NULL){
                head=p=new ListNode(a[i]);
            } else{
                p->next=new ListNode(a[i]);
                p=p->next;
            }
        }
        return head;
    }

    ListNode* middleNode(ListNode* head){

        ListNode* slow=head;
        ListNode* fast=head;
        //当fast到达链表的最后的时候，slow刚好指向中间，或者中间的第二个
        while (fast!= NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;

    }

    //输出链表
    void printList(ListNode *p){

        while (p != NULL){
            cout<<p->val;
            p=p->next;
        }

    }
};

//int main(){
//    Solution solution;
//    int a[]={1,2,3,4,5,6};
//    int b[]={1,2,3,4,5};
//    solution.printList(solution.middleNode(solution.createList(a,6)));
//    solution.printList(solution.middleNode(solution.createList(b,5)));
//
//    return 0;
//}


