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
    ListNode* rotateRight(ListNode* head, int k) {
    int n = 1;
        if(!head){
            return head;
        }
    ListNode *temp1 = head;
        while(temp1->next != NULL){
            n++;
            temp1 = temp1->next;
        }
        if(k == n){
            return head;
        }
        cout<<n;
    k = k % n;
    temp1->next = head;
    int i=1;
    ListNode* temp2 = head;
        while(i != n-k){
            i++;
            temp2 = temp2->next;
        }
    ListNode *ans = temp2->next;
    temp2->next = NULL;
        return ans;
    }
};