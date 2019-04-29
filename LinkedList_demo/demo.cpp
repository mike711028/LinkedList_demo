#include <iostream>
#include "node.h"


int main()
{
	node *linked_list = new node();
	
	
	for (int i = 0; i < 10; i++)
	{
		linked_list->PushBack(i);
	}
		

	
		linked_list->ListArray();
	
	
	
	
}