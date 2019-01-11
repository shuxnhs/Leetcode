//
// Created by 何晓宏 on 2018/10/29.
//修改指针指向
//
#include<iostream>
#include<stack>
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

    //反转链表,迭代方式，修改原先链表的指向
    ListNode* reverseList(ListNode* head){

        if(head ==NULL ||(head->next==NULL)){
            return head;
        }
        else{
            //三个指针
            ListNode* p=head;
            ListNode* q=head->next;
            ListNode* r=head->next->next;

            //开始反转，将头节点指向null
            p->next=NULL;

            //将q的next移到p；p、q、r向右移
            while(r!=NULL){
                q->next=p;
                p=q;
                q=r;
                r=r->next;
            }

            //r为null更改最后一个指向，返回头节点q
            q->next=p;
            return q;

        }

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

