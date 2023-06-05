#include"Linked_List.h"
#include<iostream>


LinkedList::LinkedList()
{
	_head = nullptr;
	_tail = nullptr;
	_numberOfElements = 0;

}

void LinkedList::Push_Back(int data) {

	Node* newNode = new Node(data);
	if (_head == nullptr) {
		_head = newNode;
		_tail = newNode;
		return;
	}
	newNode->SetNext(_tail);
	_tail = newNode;
}

void LinkedList::ShowList()
{
	for (Node* ptr = _tail; ptr != _head->GetNext(); ptr = ptr->GetNext())
		std::cout << ptr->GetData() << '\n';
}

Node* LinkedList::SearchByIndex(int index) {
	Node* ptr = _tail;
	int count = _numberOfElements - index;
	while (count > 0)
	{
		ptr = ptr->GetNext();
		count--;
	}
	return ptr;

}

