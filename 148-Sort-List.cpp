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
    ListNode* sortList(ListNode* head) {
        vector<int> num;
        ListNode* curr=head;
        while(curr!=NULL){
            num.push_back(curr->val);
            curr=curr->next;
        }
        sort(num.begin(),num.end());
        ListNode* temp=new ListNode;
        ListNode* dum=temp;
        for(int i=0;i<num.size();i++){
            dum->next=new ListNode(num[i]);
            dum=dum->next;
        }
        return temp->next;
        
    }
};