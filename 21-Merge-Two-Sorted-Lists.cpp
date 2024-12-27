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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> num;
        ListNode* t1=list1;
        ListNode* t2=list2;
        while(t1!=NULL){
            num.push_back(t1->val);
            t1=t1->next;
        }
        while(t2!=NULL){
            num.push_back(t2->val);
            t2=t2->next;
        }
        sort(num.begin(),num.end());
        ListNode* temp=new ListNode;
        ListNode* dummy=temp;
        for(int i=0;i<num.size();i++){
            dummy->next=new ListNode(num[i]);
            dummy=dummy->next;
        }
        return temp->next;
    }
};