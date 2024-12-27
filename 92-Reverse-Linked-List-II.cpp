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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> num;
        while(head!=NULL){
            num.push_back(head->val);
            head=head->next;
        }
        reverse(num.begin()+(left-1),num.begin()+(right));
        ListNode* temp=new ListNode;
        ListNode* dum=temp;
        for(int i=0;i<num.size();i++){
            dum->next=new ListNode(num[i]);
            dum=dum->next;
        }
        return temp->next;
    }
        
    
};