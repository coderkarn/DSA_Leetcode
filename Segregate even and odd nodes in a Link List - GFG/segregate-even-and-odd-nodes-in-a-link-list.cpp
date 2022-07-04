// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        vector<int> e,o;
        Node *temp=head;
        while(temp!=NULL){
            if(temp->data%2==0){
                e.push_back(temp->data);
            }
            else{
                o.push_back(temp->data);
            }
            temp=temp->next;
        }
        temp=head;
        int n=e.size(),m=o.size();
        for(int i=0;i<n;i++){
            temp->data=e[i];
            temp=temp->next;
        }
        for(int i=0;i<m;i++){
            temp->data=o[i];
            temp=temp->next;
        }       
        return head;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends