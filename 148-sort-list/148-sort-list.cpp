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
        //merge sort usage for 0(nlogn)
        if(!head || !head->next)
            return head;
        ListNode* mid= getMid(head);
        ListNode* left= sortList(head);        
        ListNode* right= sortList(mid);
        return merge(left,right);
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* temp=new ListNode(0);
        ListNode* p1=temp;
        while(l1 && l2){
            if(l1->val<l2->val){
                p1->next=l1;
                l1=l1->next;
            }
            else{
                p1->next=l2;
                l2=l2->next;
            }
            p1=p1->next;
        }
        if(l1)  p1->next=l1;
        if(l2)  p1->next=l2;   
        return temp->next;
    }
     ListNode* getMid(ListNode* head) {
        ListNode* midPrev = nullptr;
        while (head && head->next) {
            midPrev = (midPrev == nullptr) ? head : midPrev->next;
            head = head->next->next;
        }
        ListNode* mid = midPrev->next;
        midPrev->next = nullptr;
        return mid;
    }
};