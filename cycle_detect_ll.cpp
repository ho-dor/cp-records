/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //Floyd cycle detection.
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow=head;

        ListNode* fast=head;

        while(fast->next!= NULL){
                if(fast->next->next!=NULL){
                     slow = slow->next;
                     fast = fast->next->next;
                     if(fast==slow){
                        return true;
                        }
                }else{
                    return false;
                }
        }
        return false;
    }
};
