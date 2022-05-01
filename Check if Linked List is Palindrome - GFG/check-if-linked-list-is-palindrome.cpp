// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    //Function to check whether the list is palindrome.
    
    // Let's find reverse of LL
     Node*reverse(Node*head){
        if(!head or !head->next) return head;
        Node*prev=NULL;
        while(head){
            Node*nxt=head->next;
            head->next=prev;
            prev=head;
            head=nxt;
        }
        return prev;
    }
    
    
    bool isPalindrome(Node *head)
    {
         // we will find middle of linked list and will reverse it and then compare node, if not equal then not palindrome else return palindrome at last. e.g. 1221 -> 2121 ==> let's assume middle be 2 now compare from starting and middle 2=2 ,1=1 ===>palindrome.
        
        
       if(!head or !head->next) return head; 
        Node*slow=head,*fast=head;
        
        // Middle of LL
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        // if fast is not null then there is even node in LL hence compare it from mid+1
        if(fast!=NULL){
            slow=slow->next;
        }
        Node*mid=reverse(slow); // reverse the LL
        
        slow=head;
        while(mid){
            if(slow->data != mid->data) return false; // Not palindrome 
            slow=slow->next;
            mid=mid->next;
        }
        return true;
    } 
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends