/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        vector<ListNode*> vis;

        while(temp!=nullptr){
            for(ListNode* node : vis){
                if(node == temp){
                    return node;
                }
            }

            vis.push_back(temp);
            temp=temp->next;
        }

        return nullptr;
    }
};