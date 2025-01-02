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
        vector<int> num;
        ListNode* curr=head;
        while(curr!=NULL){
            num.push_back(curr->val);
            curr=curr->next;
        }
        
        ListNode* temp=new ListNode;
        ListNode* dum=temp;
        for(int i=0;i<num.size();i++){
            if(i==(num.size()-n)){
                continue;
            }
            else{
                dum->next=new ListNode(num[i]);
                dum=dum->next;
            }
        }
        
        return temp->next;

    }
};