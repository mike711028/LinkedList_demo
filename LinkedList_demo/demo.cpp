#include <iostream>
#include "node.h"


int main()
{
	node *head_ptr = new node();

	for (int i = 0; i < 3; i++)
	{
		head_ptr->PushFront(i + 1);
	}

	head_ptr->ListArray();

	head_ptr->Erase(2);

	head_ptr->ListArray();





	

	
	
	
	
	
}