#include "SinglyLinkedList.h"


/*
Default constructor for singly linked list
*/
SinglyLinkedList::SinglyLinkedList()
{
	this->length = 0;
	this->head = NULL;
}


/*
Destructor for singly linked list. Deallocates dynamic memory occupied by nodes.
*/
SinglyLinkedList::~SinglyLinkedList()
{
	Node *node = head;
	Node *next;
	while (node != NULL) {
		next = node->next;
		delete node;
		node = next;
	}
}


/*
Pushes a new node to the head of the linked list
-value: The value of the new node to be added
*/
void SinglyLinkedList::push(int value) {
	Node* newNode = new Node(value, this->head);
	this->head = newNode;
	this->length++;
}


/*
Pops the node at the head of the linked list
*/
void SinglyLinkedList::pop() {
	Node *node = this->head;
	this->head = this->head->next;
	delete node;
	this->length--;
}


/*
Inserts a node at a specific position in the linked list
-value: The value of the new node to be added
-index: The desired index of the new node
*/
void SinglyLinkedList::insertAt(int value, int index) {
	if (index >= this->length) {
		return;
	}

	// Traverse the list until we hit the desired index
	Node *successor = this->head;
	Node *previous = NULL;
	for (int i = 0; i < index; i++) {
		previous = successor;
		successor = successor->next;
	}

	// Add the new node to the list in its correct position. Connect it to its predecessor (if any)
	Node *newNode = new Node(value, successor);
	if (index > 0) {
		previous->next = newNode;
	}
	else if (index == 0) {
		head = newNode;
	}

	this->length++;
	return;
}


/*
Deletes a node from the linked list at a specific position
-value: The value of the new node to be added
-index: The index at which to delete the node
*/
void SinglyLinkedList::deleteAt(int index) {
	if (index >= this->length) {
		return;
	}

	// Traverse the list until we hit the desired index
	Node *current = this->head;
	Node *previous = NULL;
	for (int i = 0; i < index; i++) {
		previous = current;
		current = current->next;
	}

	// Delete the desired node and connect the previous node to the next node (if any)
	Node *successor = current->next;
	delete current;
	if (previous != NULL) {
		previous->next = successor;
	}

	this->length--;
	return;
}

/*
Returns the value of the node at index
-index: the position in the linked list
*/
int SinglyLinkedList::get(int index) {

	// Fail if the index is outside the range of the linked list's indices
	if (index < 0 || index >= length) {
		assert(0);
	}

	// Traverse the linked list up to the index, then return the value of the node
	Node *n = this->head;
	int i = 0;
	while (n != NULL) {
		if (i == index) {
			return n->value;
		}
	}
	return n->value;
}


/*
Returns a string representing the contents of the singly linked list
*/
string SinglyLinkedList::stringify() {
	string s = "";
	Node *n = this->head;
	while (n != NULL) {
		s += "[" + to_string(n->value) + "]->";
		n = n->next;
	}
	s += "NULL";
	return s;
}
