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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp;
        vector<int> list;

        if(head == nullptr) return head;

        temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            list.push_back(temp->val);
            temp=temp->next->next;
        }

        if(temp){
            list.push_back(temp->val);
        }

        temp=head->next;
        while(temp!=nullptr && temp->next!=nullptr){
            list.push_back(temp->val);
            temp=temp->next->next;
        }

        if(temp){
            list.push_back(temp->val);
        }

        temp=head;
        int i=0;
        while(temp!=nullptr){
            temp->val=list[i++];
            temp=temp->next;
        }

        return head;
    }
};