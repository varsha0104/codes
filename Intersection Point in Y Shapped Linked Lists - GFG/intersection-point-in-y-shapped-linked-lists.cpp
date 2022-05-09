// { Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
/*
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
      Node* a = head1;
      Node* b = head2;
      
      while(a!=b)
      {
          if(a==NULL)
          {
              a = head2;
          }
          else
          {
              a = a->next;
          }
          if(b==NULL)
          {
              b = head1;
          }
          else
          {
              b = b->next;
          }
      }
      
      return a->data;
}
*/


int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
      int len1=0, len2=0 , diff; 
      Node *temp1 = head1;
      Node *temp2 = head2;
      while(temp1 != NULL){
          len1++;
          temp1 = temp1 -> next;
      }
      while(temp2 != NULL){
          len2++;
          temp2 = temp2 -> next;
      }
      
      temp1 = head1;
      temp2 = head2;
      
      diff = abs(len1-len2);
      
      if(len1>len2){
          for(int i=0 ; i<diff ; i++)
              temp1 = temp1 -> next;
      }
      else{
          for(int i=0 ; i<diff ; i++)
              temp2 = temp2 -> next;
      }      
          
        while(temp1 != temp2){
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        return temp1 -> data;
}


