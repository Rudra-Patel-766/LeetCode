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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        vector<int> list;

        int sum=0;
        int ans=INT_MIN;

        while(temp!=nullptr){
            list.push_back(temp->val);
            temp=temp->next;
        }

        int n=list.size();
        for(int i=0;i<list.size();i++){
            sum=list[i]+list[n-1-i];
            ans=max(ans,sum);
        }

        return ans;
    }
};