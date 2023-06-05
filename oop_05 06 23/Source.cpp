#include<iostream>
// перегрузка операторов
//Linked List (односвязанный список)
#include"Linked_List.h"

class Digit
{
private:
	int _Data;
public:
	Digit(int data):_Data(data){}


	int operator+(Digit& digit) {
		return _Data + digit._Data;
	}
	int operator-(Digit& digit) {
		if (_Data<digit._Data)

		return _Data - digit._Data;
	}

};




int main() {
	/*Digit digit(5);
	Digit digit2(10);
	std::cout << digit.operator+(digit2) << '\n';
	std::cout << digit.operator-(digit2) << '\n';
	std::cout << digit + digit2 << '\n';
	std::cout << digit - digit2 << '\n';*/

	//Linked List (односвязанный список)

	LinkedList list;
	list.Push_Back(109);
	list.Push_Back(19);
	list.Push_Back(105);
	list.Push_Back(9);
	list.Push_Back(149);
	list.Push_Back(11);
	list.ShowList();
	std::cout << list.SearchByIndex(3)->GetData();

	return 0;
}