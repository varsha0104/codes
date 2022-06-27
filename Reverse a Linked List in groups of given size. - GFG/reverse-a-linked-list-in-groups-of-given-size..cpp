// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    /*
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head == NULL)
        return NULL;
        
        node *currentnode=head;
        node *prevnode=NULL;
        node *nextnode=NULL;
        
        int count=0;
        while(currentnode!=NULL && count<k){
            nextnode=currentnode->next;
            currentnode->next=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
            count++;
        }
        
        if(nextnode!=NULL){
            head->next=reverse(nextnode,k);
        }
        return prevnode;
    }
    */
    
    
    //2nd
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        struct node *cur,*prev,*next,*start1,*start2;
        int flag=0,m=0;
        cur=head;
        prev=NULL;
        start1=cur;
        while(cur!=NULL){
            for(int i=0;i<k;i++){
                if(cur==NULL){
                    break;
                }
                next=cur->next;
                cur->next=prev;
                prev=cur;
                cur=next;
            }
            
            if(m!=0){
                start1->next=prev;
                start1=start2;
            }
            start2=cur;
            m++;
            if(flag==0){
                head=prev;
                flag=1;
            }
            prev=NULL;
        }
        return head;
    }
};

// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends