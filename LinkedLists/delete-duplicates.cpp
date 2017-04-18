#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

/* Structure of node in the linked list */

struct node
{
	int data; //value of node
	struct node * next; //Link to next node
}*head;


class single_llist
{

	public:
		node * create_node(int);
		void insert_begin(int); // Inserts element at the beginning of linked list
		void insert_end(int); //Inserts element at the end of linked list
		void delete_val(int); //Deletes element if available from the linked list
		void search(int); //Searches the list for the given element
		void display(); //Displays all elements or a message if the list is empty
		void delete_dup();

		single_llist()
		{
			head = NULL; //Initializing head pointer to NULL
		}
};


int main()
{
	single_llist sl;
	// sl.display();
	
	sl.insert_begin(2);
	sl.insert_begin(4);
	sl.insert_begin(4);
	sl.insert_begin(6);
	sl.insert_begin(6);
	sl.insert_begin(8);
	sl.insert_begin(8);

	sl.display();
	
	sl.delete_dup();
	//sl.delete_val(6);
	sl.display();
}


/* Creates a new node in the linked list*/

node *single_llist :: create_node(int val)
{
	struct node *temp;
	temp = new (struct node);
	if(temp == NULL)
	{
		cout<<"Memory not allocated";
		return 0;
	}

	else
	{
		temp->data = val;
		temp->next = NULL;
		return temp;
	}

}

/* Inserts a new node in the linked list*/

void single_llist :: insert_begin(int val)
{
	struct node *temp, *temp1;
	temp = create_node(val);
	if(head == NULL)
	{
		head = temp;
		head->next = NULL;
	}
	else
	{
		temp1 = head;
		head = temp;
		head->next = temp1;
	}
	//cout<<"inserted ele "<<val<<endl;
}

void single_llist :: insert_end(int val)
{
	struct node *temp, *temp1;
	temp = create_node(val);
	if(head == NULL)
	{
		head = temp;
		head->next = NULL;
	}
	else
	{
		temp1 = head;
		// head = temp;
		// head->next = temp1;
		while(temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;

	}
	cout<<"inserted ele "<<val<<endl;
}



/* Deletes the given element from the linked list */



void single_llist :: delete_val(int val)

{
	struct node *temp, *temp1, *prev;
	temp = head;
	prev = NULL;
	cout<<"\nval to be deleted is "<<val<<endl;
	//cout<<"head value is "<<temp->data<<endl;
	if(temp == NULL)
	{
		cout<<"\nList is empty\n";
		return;
	}

	else
	{
		while(temp != NULL)
		{
			if(temp->data == val)
			{
				
				if(prev != NULL)
				{
					temp1 = temp;
					prev->next = temp->next;
					temp = temp->next;
					free(temp1); //Frees the deleted value from memory
				}
				else
				{
					head = temp->next;
					temp = temp->next;
				}
				
			}
			else
			{
				prev = temp;
				temp = temp->next;
			}
		}
		
	}
}



/* Deletes duplicate elements form a linked list */
void single_llist :: delete_dup()

{
	struct node *temp, *temp1, *prev;
	cout<<"\nRemoving duplicate elements form the list if any"<<endl;
	
	if(head == NULL)
	{
		cout<<"\nList is empty\n";
		return;
	}
	int val = head->data;
	prev = head;;
	temp = head->next;

		while(temp)
		{
			if(temp->data == val)
			{
				temp1 = temp;
				prev->next = temp->next;
				temp = temp->next;
				free(temp1); //Frees the deleted value from memory			
			}
			else
			{
				val = temp->data;
				prev = prev->next;
				temp = temp->next;
			}
		}
}






/* Displays all elements from linked list */

void single_llist :: display()
{
	struct node *temp;
	temp = head;
	//cout<<"temp data "<<temp->data<<endl;
	if(head == NULL)
	{
		cout<<"\nList is empty\n";
		return ;
	}
	cout<<"\nList of elements in the linked list :"<<endl;
	while(temp != NULL)
	{
		cout<<temp->data;
		cout<<"\n";
		temp = temp ->next;
	}
}

void single_llist ::search(int val)
{

	struct node *temp;
	temp = head;
	while(temp->next != NULL)
	{
		if(temp->data == val)
		{
			cout<<"\nElement found "<<endl;
			return;
		}
		else
		{
			temp = temp ->next;
		}
	}
	cout<<"\nElement to be searched not available in the list"<<endl;
}















