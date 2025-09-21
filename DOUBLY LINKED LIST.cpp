#include<iostream>
using namespace std;
//a doubly linked list node
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
//inserts node at the front of the list
void insert_front(struct node** head, int new_delete)
{
	//allocate memory for new node...
	struct node* newnode = new node;
	
	//assign data to new node
	newnode->data = new_delete;
	
	//new node is head and prevoius is null, since we are adding at the front
	newnode->next=(*head);
	newnode->prev=NULL;
	
	//prevoius of head is new node
	if((*head)!= NULL)
	(*head)=newnode;
	//given a node as prev_node, insert a new node after the given node
	void insert_after(struct node* prev_node, int new_data)
	{
		//check if prev node is null
		if(prev_node==NULL)
		{
			cout<<"Prevoius node is required, it cannot be NULL"<<endl;
			return;
		}
	}
	//allocate memory for new node
	struct node* newnode = new node;
	
	//assign data to new node
	struct node->data = new_node;
	
	//set next of prev node to newnode
	prev_node->next=newnode;
	
	//now set to prev of newnode to prev vode
	newnode->prev=prev_node;
	
	//set prev of new node's next to newnode
	if(newnode->next != NULL)
	{
		newnode->next->prev=newnode;
	}
	
	//insert a new node at the end of the list
	void insert_end(struct node** head, int new_data)
	{
		//allocate memory for node
		struct node* newnode = newnode;
		
		struct node* last = *head;//set last node value to head
		
		//set data for new node
		newnode->data=new_data;
		
		//new noce is the last node, so set next of new node to null
		newnode->next=NULL;
		
		//check if list is empty, if yes make new node the head of list
		if(*head==NULL)
		{
			newnode->prev=NULL;
			*head=newnode;
			return;
		}
		
		//otherwiuse traverse the list to go to last node
		while(last->next!=NULL)
		last=last->next;
		
		//set next of last ot new node
		last=last->next;
		
		//set last to prev of new node
		newnode->prev=last;
		return;
	}
	
	//this function prints content of linked list starting from the given node
	void displaylist(struct node* node)
	{
		struct node* last;
		while(node!=NULL)
		{
			cout<<node->data<<"<==>";
			last=node;
			node=node->next;
		}
		if(node==NULL){
			cout<<"NULL";
		}
	}
	
}
//main program
	int main(){
		//start with the empty list
		struct node* head = NULL;
		
		//insert 40 as last node 
		insert_end(&head,40);
		
		//insert 20 at the head
		insert_end(&head,20);
		
		//insert 10 at the beginning 
		insert_front(&head,10);
		
		//insert 50 at the end
		insert_end(&head,50);
		
		//insert 30, after 20..
		insert_after(head->next,30);
		
		cout<<"Doubly link list is as folloes :"<<endl;
		displaylist(head);
		return 0;
	}