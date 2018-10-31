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
    prev->next = NULL;
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

    //删除链表的倒数第N个结点,快慢指针，让快指针先走n步
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if( head == NULL || n<=0)   
            return head;

        ListNode* slow=head;
        ListNode* fast=head;
        while(n--){
            fast=fast->next;
        } 

        if(fast == NULL){
            return head->next;
        }
        //fast走到链表末尾，删除slow所在的结点
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }  
        slow->next=slow->next->next;

        return head;

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
    int a[]={1,3,5,6,7,7};
    
    Solution solution;
    solution.printList(solution.removeNthFromEnd(solution.createList(a,6),5));
    return 0;

  
}


