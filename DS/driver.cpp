#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;

void testSinglyLinkedList() {
	SinglyLinkedList list = SinglyLinkedList();
	for (int i = 0; i < 10; i++) {
		list.push(i);
	}
	cout << list.stringify() << endl;
	list.push(5);
	cout << list.stringify() << endl;
	list.insertAt(-7, 1);
	cout << list.stringify() << endl;
	list.deleteAt(11);
	cout << list.stringify() << endl;
	cout << "Item at index 0: " << list.get(0) << endl;
}


int main() {
	testSinglyLinkedList();
}