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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * dummy = new ListNode ; 
        ListNode * temp = dummy;
        int car = 0; 
        while(l1 != NULL || l2 != NULL || car){
            int sum =0 ;
            if(l1 != NULL){
                sum = sum + l1->val;
                l1 = l1->next;
                
            }
             if(l2 != NULL){
                sum = sum + l2->val;
                 l2 = l2->next;
                
            }
            
            sum +=  car;
            car = sum/10;
             ListNode * d = new ListNode(sum%10) ;
            // d->val = sum%10;
            temp->next = d;
            temp = temp->next;
            
        }
        return dummy->next;
    }
};