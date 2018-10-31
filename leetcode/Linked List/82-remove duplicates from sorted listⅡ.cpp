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

    //删除重复元素,与83区别是所有重复的都要删掉
    ListNode* deleteDuplicates(ListNode* head){

        if(!head){
            return NULL;
        }

        //在head前再加一个表头，从新表头开始判断就和83一样了
        ListNode* newhead=new ListNode(-1);
        newhead->next=head;

        ListNode* p=newhead;
        while(p->next != NULL && p->next->next!= NULL){
            if(p->next->val == p->next->next->val){
                //开始删除从新表头开始后与p相同的结点
                int val=p->next->val;
                while(p->next != NULL && val == p->next->val){
                    p->next=p->next->next;
                }
            }
            else{
                p=p->next;
            }
        }
        return newhead->next;

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
   int a[]={1,1,2,3,3};
   Solution solution;
   ListNode *p=solution.createList(a,5);
   ListNode *q=solution.deleteDuplicates(p);
   solution.printList(q);
   return 0;
}

