#pragma once

#include <string>
#include <stdlib.h>
#include <assert.h>
using namespace std;

class Node 
{
public:
	int value;
	Node* next;

	Node(int value, Node* next) {
		this->value = value;
		this->next = next;
	}
};


class SinglyLinkedList
{

public:
	int length;
	Node* head;

	SinglyLinkedList();
	~SinglyLinkedList();
	void push(int value);
	void pop();
	void insertAt(int value, int index);
	void deleteAt(int index);
	int get(int index);
	string stringify();

};

