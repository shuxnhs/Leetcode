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

    //合并两个有序序列
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(!l1)  return l2;
        if(!l2)  return l1;

        //定义新的链表
        ListNode* head=new ListNode(-1);
        ListNode* p=head;

        while(l1 && l2){
            if(l1->val>l2->val){
                p->next= l2;
                l2 = l2->next;
            }
            else{
                p->next= l1;
                l1 = l1->next;
            }
            p=p->next;
        }

        //l1为空，l2剩下的填入合并的链表中
        while(!l1 && l2){
            p->next= l2;
            l2 = l2->next;
            p=p->next;
        }

        //l2为空，l1剩下的填入合并的链表中
        while(l1 && !l2){
            p->next= l1;
            l1 = l1->next;
            p=p->next;
        }

        return head->next;
        
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
    int b[]={1,3,4,5,6,6};
    Solution solution;
    solution.printList(solution.createList(a,6));
    cout<<endl;
    solution.printList(solution.createList(b,6));
    cout<<endl;
    solution.printList(solution.mergeTwoLists(solution.createList(a,6),solution.createList(b,6)));
    return 0;

  
}


