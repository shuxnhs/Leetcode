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
class Solution{
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

    //删除重复元素
    ListNode* removeElements(ListNode* head, int val){

        //引入一个指向头节点的指针q
        ListNode* newnode=new ListNode(-1);
        newnode->next=head;
        ListNode* p=head;
        ListNode* q=newnode;

        while (p){
            if(p->val != val){
                q=p;
                p=p->next;

            } else{
                p=p->next;
                q->next=p;
            }
        }
        return newnode->next;
    }



    //输出链表
    void printList(ListNode *p){

        while (p != NULL){
            cout<<p->val;
            p=p->next;
        }

    }
};

int main(){
    int a[]={1,2,6,3,4,5,6};
    int val=6;
    Solution solution;
    solution.printList(solution.removeElements(solution.createList(a,7),val));
    return 0;
}

