//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
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
    Node* Clone(Node* list) {
    if (list == NULL) return NULL;

    Node* result = new Node(list->data);
    result->data = list->data;
    result->next = Clone(list->next);
    return result;
}
    struct Node* modifyTheList(struct Node *head)
    {
       int count=0;
        Node* curr = head;
      Node* curr1 = Clone(head);
       Node* prev=NULL;
       while(curr!=NULL){
           Node* next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
            count++;
       }
        curr = prev; 
      
        int n=0;
          while(n!=(count/2)){
         curr->data=(curr->data-curr1->data);
        curr=curr->next;
        curr1 = curr1 ->next;
       n++;
       }
       
       return prev; 
      
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends