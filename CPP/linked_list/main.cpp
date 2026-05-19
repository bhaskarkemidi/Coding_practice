#include<iostream>
using namespace std;
class Node {
public:
	int value;
	Node* next;
};
void printlist(Node* n)
{
	while (n != NULL)
	{
		cout << n->value << endl;
		n = n->next;
	}
}
void insertAtFirst(Node** head, int newvalue)
{
	Node* newnode = new Node();
	newnode->value = newvalue;
	newnode->next = *head;
	*head = newnode;
}
void insertAtEnd(Node** head, int newvalue)
{
	//create a new node
	Node* newnode = new Node();
	newnode->value = newvalue;
	newnode->next = NULL;

	//check whether list is empty
	if (*head == NULL)
	{
		*head = newnode;
		return;
	}

	//add new node at end
	Node* last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
}
void insertAfterNode(Node** head, int item, int newvalue)
{
	Node* newnode = new Node();
	newnode->value = newvalue;
	newnode->next = NULL;
    
	if (*head == NULL)
		*head = newnode;
	Node* find = *head;
	while (find != NULL)
	{
		if (find->value == item)
		{
			newnode->next = find->next;
			find->next = newnode;
			return;
		}
		find = find->next;
	}
}
void createlist(Node** head)
{
	Node* newnode = new Node();
	newnode->value = 1;
	newnode->next = NULL;
	
	if (*head == NULL)
	{
		
		*head = newnode;
		
	}



}
int main()
{
	Node* head=NULL;
	createlist(&head);
	insertAtFirst(&head, 10);
	insertAtFirst(&head, 11);
	insertAtFirst(&head, 12);

	insertAfterNode(&head, 13, 14);
	insertAtEnd(&head, 56);
	insertAfterNode(&head, 56,120);
	insertAtFirst(&head, 2);
	printlist(head);
	return 0;
}