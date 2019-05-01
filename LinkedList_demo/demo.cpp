#include <iostream>
#include "node.h"


int main()
{
	node *head_ptr = new node();

	for (int i = 0; i < 5; i++)
	{
		head_ptr->PushFront(i + 1);
	}

	head_ptr->ListArray();

	for (int i = 0; i < 5; i++)
	{
		head_ptr->PopBack();
	}

	std::cout << head_ptr->GetNodeNext() << std::endl;
	std::cout << head_ptr->tail_ptr << std::endl;

	head_ptr->ListArray();



	

	
	
	
	
	
}