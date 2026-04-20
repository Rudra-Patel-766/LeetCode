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
        ListNode* dummy = new ListNode(0, head);
        ListNode* temp = dummy;
        ListNode* temp1 = dummy;

        for(int i=0;i<n;i++){
            temp = temp->next;
        }

        while(temp->next!=nullptr){
            temp = temp->next;
            temp1 = temp1->next;
        }

        temp1->next = temp1->next->next;

        return dummy->next;
    }
};