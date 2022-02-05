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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector <int> list;
        for(int i=0;i<lists.size();i++){
            while(lists[i]!=NULL)
            {
                list.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(list.begin(),list.end());
        
        ListNode* ans=new ListNode(0);
        ListNode* cur=ans;
        for(int i=0;i<list.size();i++){
            ans->next=new ListNode(list[i]);
            ans=ans->next;
        }
        return cur->next;
    }
};