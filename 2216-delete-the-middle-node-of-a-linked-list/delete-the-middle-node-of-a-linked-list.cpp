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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }

        int n=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }

        ListNode* p=head;
        ListNode* q=head->next;

        for(int i=0;i<(n/2)-1;i++){
            p=p->next;
            q=q->next;
        }

        p->next=q->next;

        return head;
    }
};