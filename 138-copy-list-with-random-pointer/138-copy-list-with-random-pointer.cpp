/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* it =head;
        Node* first= head;
        
         // First round: make copy of each node,
          // and link them together side-by-side in a single list.
        while(it!=NULL){
            
            first=it->next;//move pointer to second node
            
            Node* copy= new Node(it->val);
            //creating a new node of value equal to head node in 1st iter
            //consequently copy and make new nodes 
            
            it->next=copy;    // move it to next node
            copy->next=first;   //join nodes to its copied node
            
            it=first;
        }
        
        //Second Round: Assign random pointers for thr copy nodes.
        it= head;
         while (it != NULL) {
            if (it->random != NULL) {
              it->next->random = it->random->next;
            }
            it = it->next->next;
          }
         // Third round: restore the original list, and extract the copy list.
        
        it= head;
        Node* pshead=new Node(0);
        Node* copy= pshead;
        
        while(it!=NULL){
            first=it->next->next;
            //extract copy list
            copy->next=it->next;
            
            //restore the original list
            it->next=first;
            
            copy=copy->next;
            it=first;
            
        }
        return pshead->next;
    }
};