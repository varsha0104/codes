// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
/*
class Solution
{
   public:
   Node*reverse(Node*head){
       Node*prev=NULL,*nex=NULL,*curr=head;
       while(curr!=NULL){
           nex=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nex;
       }
       return prev;
   }
   //Function to add two numbers represented by linked list.
   struct Node* addTwoLists(struct Node* first, struct Node* second)
   {
       first=reverse(first);
       second=reverse(second);
       Node*curr=NULL,*res=NULL,*t;
       int s=0;
       int c=0;
       while(first!=NULL or second!=NULL){
           s=c+(first?first->data:0)+(second?second->data:0);
           c=(s>=10)?1:0;
           s=s%10;
           t=new Node(s);
           if(res==NULL)res=t;
           else curr->next=t;
           curr=t;
           if(first)first=first->next;
           if(second)second=second->next;
       }
       if(c>0){
           t=new Node(c);
           curr->next=t;
       }
       res=reverse(res);
       return res;
   }
};

*/


/*
class Solution
{
    public:
    //Function to reverse the linked list.
    Node* reverse(Node *head) 
    {
        Node * prev = NULL;
        Node * current = head;
        Node * next;
        
        while (current != NULL) 
        { 
            next = current->next;     
            current->next = prev;     
            prev = current;          
            current = next;
        }
        
        return prev; 
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //reversing both lists to simplify addition.
        first = reverse(first);             
        second = reverse(second);            
        
        Node *sum=NULL;
        int carry=0;
        
        //using a loop till both lists and carry gets exhausted.
        while( first!=NULL || second!=NULL || carry!=0 )
        {
            //using a variable to store sum of two digits along with carry.
            int newVal = carry;
            
            //if nodes are left in any list, we add their data in newVal.
            if(first) newVal += first->data;
            if(second) newVal += second->data;
        
            //updating carry.
            carry = newVal/10;
            
            //using modulus to store only a single digit at that place.
            newVal = newVal%10;             
            
            //creating new node which gets connected with other nodes that 
            //we get after calculating sum of respective digits.
            Node* newNode = new Node(newVal);
            
            //storing the previously made nodes in the link part of new node.
            newNode->next = sum;
            
            //making the new node as the first node of all previously made node.
            sum = newNode;
            
            //moving ahead in both lists.
            if(first) first = first->next; 
            if(second) second = second->next;
        }
        return sum;
    }
};
*/

class Solution
{
    public:
    //Function to reverse the linked list.
    Node* reverse(Node *head) 
    {
        Node * prev = NULL;
        Node * current = head;
        Node * next;
        
        while (current != NULL) 
        { 
            next = current->next;     
            current->next = prev;     
            prev = current;          
            current = next;
        }
        return prev; 
    }
    
    //insert elements  
    void insertAtTail(struct Node* &head, struct Node* &tail , int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
            return;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }
    
    
    //function to add the linked lists
    struct Node* add(struct Node* first, struct Node* second){
        int carry=0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        //using a loop till both lists and carry gets exhausted
        while( first!=NULL || second!=NULL || carry!=0 ){
            int val1=0;
            if(first!=NULL)
                val1=first->data;
                
            int val2=0;
            if(second!=NULL)
                val2=second->data;
                
            int sum = carry + val1 + val2;
            int digit = sum % 10;
            
            //create node and add in answer Linked List
            insertAtTail(ansHead , ansTail , digit);
            
            carry = sum/10;
            
            if(first != NULL)
                first = first ->next;
                
            if(second != NULL)
                second = second -> next;
            
        }
        return ansHead;
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //reversing both lists to simplify addition.
        first = reverse(first);             
        second = reverse(second);            
        
        //add two linked lists
        Node* ans = add(first,second);
        
        //step3 : reverse the answer (output linked list)
        ans = reverse(ans);
        
        return ans;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends