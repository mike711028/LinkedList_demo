#include <iostream>
#include "node.h"


int main()
{
	node *head_ptr = new node();

	for (int i = 0; i < 2; i++)
	{

	head_ptr->PushFront(i);
	//std::cout << "the head_ptr is " << head_ptr->GetNodeNext() << std::endl;

	}
	head_ptr->ListArray();
	std::cout << "the top value is " << head_ptr->TopFront() << std::endl;
	head_ptr->PopFront();
	head_ptr->ListArray();
	head_ptr->PopFront();
	head_ptr->ListArray();


	
	
	
	
	
}