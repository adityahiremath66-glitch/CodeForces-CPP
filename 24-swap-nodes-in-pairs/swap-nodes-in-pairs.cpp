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
    ListNode* swapPairs(ListNode* head) {
        if(!head){
            return head;
        }
    ListNode *a = head;
    ListNode *b = head->next;
        if(head->next == NULL){
            return head;
        }
        while(a != NULL && b != NULL){
            swap(a->val,b->val);
            a = b->next;
            if(b->next != NULL){
                b = b->next->next;
            }
        }
        return head;
    }
};