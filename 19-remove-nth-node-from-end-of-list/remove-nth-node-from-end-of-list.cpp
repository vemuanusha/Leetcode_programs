/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode*d=new ListNode(0);
       d->next=head;
       ListNode*first=d;
       ListNode*sec=d;
       for(int i=0;i<=n;i++){
        first=first->next;
       } 
       while(first!=nullptr){
        first =first->next;
        sec=sec->next;
       }
       ListNode*temp=sec->next;
       sec->next=sec->next->next;
       delete temp;

       return d->next;
    }
};