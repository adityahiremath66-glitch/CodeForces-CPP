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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
    if(head == NULL || l == r){
            return head;
        }
    ListNode* ptr = new ListNode(0);
    ptr->next = head;
    ListNode* prev_l_ptr = ptr;
        for(int i = 1; i<l; i++){
            prev_l_ptr = prev_l_ptr->next;
        }

    ListNode* l_ptr = prev_l_ptr->next;
    ListNode* r_ptr = l_ptr;

        for(int i=0; i<r-l; i++){
            r_ptr = r_ptr->next;
        }
    ListNode* next_r_ptr = r_ptr->next;
    
    ListNode* prev = next_r_ptr;
    ListNode* curr = l_ptr;

        while(curr != next_r_ptr){
                ListNode* nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
        }
    prev_l_ptr->next = prev;
        

        return ptr->next;
    }
};