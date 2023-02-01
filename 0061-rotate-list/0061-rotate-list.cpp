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
    ListNode* rotateRight(ListNode* h, int k) {
        if(h == NULL){
            return NULL ; 
        }
        ListNode* temp = h;
         ListNode*  he = NULL;
        int counter = 0;
        while(temp->next != NULL){
            temp = temp->next;
            counter++;
        }
        
        temp->next = h ;
        k = k%(counter+1) ; 
        k = counter- k;
        while(k--){
           h=h->next;       
        }
        he =h->next;
        h->next = NULL;
        return he;
    }
};