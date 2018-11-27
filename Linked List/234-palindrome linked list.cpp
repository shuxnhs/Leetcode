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



    //判断回文链表,采用栈
    bool isPalindrome(ListNode* head){
        stack<int>s;
        //只有一个头或者没有头属于回文链表
        if(!head || !head->next)  {
            return true;
        }

        //将链表中的前一半数据存入栈，联想876的fast与slow
        ListNode* slow=head;
        ListNode* fast=head;
        s.push(head->val);

        //当fast到达链表的最后的时候，slow刚好指向中间，或者中间的第二个,将slow存入
        while (fast->next &&  fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            s.push(slow->val);
        }
        //弹出奇数中间元素，或偶数的中间第二个，接下来开始判断
        
        if(!fast->next){
            s.pop();
        }
    

        while( slow->next){

            slow=slow->next;
            int temp=s.top();
            s.pop();

            //当弹出的有一个不与栈弹出的相等则不为回文链表
            if(temp!= slow->val){
                return false;
            }
            
            
        }
        return true;
    }
};

int main()
{
    int a[]={1,2,3,2,1};
    int b[]={1,2,3,3,2,1};
    int c[]={1,2,3,1,2,3};
    Solution solution;
    solution.isPalindrome(solution.createList(a,5));
    solution.isPalindrome(solution.createList(b,6));
    solution.isPalindrome(solution.createList(c,6));

    return 0;
}

