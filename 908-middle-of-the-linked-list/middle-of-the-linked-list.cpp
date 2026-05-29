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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        vector<int> list;

        while(temp!=nullptr){
            list.push_back(temp->val);
            temp=temp->next;
        }

        int n=list.size()/2;

        ListNode* p=head;
        for(int i=0;i<n;i++){
            p=p->next;
        }

        return p;
    }
};