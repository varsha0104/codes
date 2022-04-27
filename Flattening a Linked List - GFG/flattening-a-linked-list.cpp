// { Driver Code Starts
#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}
// } Driver Code Ends


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*
void add(Node* p , vector<int>& v)
{
   while(p)
   {
       v.push_back(p->data);
       p=p->bottom;
   }
}

Node *flatten(Node *root)
{
  vector<int> v;
  Node*it=root;
  while(it)
  {
      v.push_back(it->data);
      if(it->bottom)
      {
          add(it->bottom, v);
      }
      it=it->next;
  }
 sort(v.begin(), v.end());
  
  int i=0;
  Node* head=new Node(v[i]);
  
  it=head;
  Node* s;
  while(i < v.size()-1)
  {
      i++;
      s=new Node(v[i]);
      it->bottom=s;
      it=s;
  }
 return head;
}
*/

/*
Node* merge(Node* A,Node *B){
    Node* ans=new Node(-1),*temp=ans;
    while(A and B){
        if(A->data<B->data){
            temp->bottom=A;
            A=A->bottom;
            temp=temp->bottom;
        }
        else{
            temp->bottom=B;
            B=B->bottom;
            temp=temp->bottom;
        }
    }
        if(A) 
            temp->bottom=A;
        if(B)
            temp->bottom=B;
        return ans->bottom;
}
*/

Node*merge(Node*a, Node*b){
   if(!a) return b;
   if(!b) return a;
   Node*res;
   if(a->data<b->data){
       res = a;
       res->bottom = merge(a->bottom,b);
   } else {
       res = b;
       res->bottom = merge(a,b->bottom);
   }
   res->next = NULL;
   return res;
}    

Node *flatten(Node *root)
{
  if(!root || !root->next) return root;
  return merge(root,flatten(root->next));
}