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
    ListNode* mergeKLists(vector<ListNode*>& l) {
        int n=l.size();
        ListNode *head1 = new ListNode(-1);
        ListNode *curr = head1;
        for(int i=0;i<n;i++){
            ListNode*temp = l[i];
            while(temp!=nullptr){
                curr->next=new ListNode(temp->val);
                curr = curr->next;
                temp = temp->next;
            }
        }
        vector<int>vals;
        ListNode*temp = head1->next;
        while(temp != nullptr){
            vals.push_back(temp->val);
            temp=temp->next;
        }
        sort(vals.begin(),vals.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* cur=dummy;
        for(int x:vals){
            cur->next = new ListNode(x);
            cur=cur->next;
        }
        return dummy->next;
    }
};