#include "node.h"
#include <iostream>


void node::PushFront(int key)
{
	// it's an empty list 
	if (this->GetNodeNext() == NULL)
	{
		// allocate the first element
		node *first_element = new node(key);
		// set head_ptr pointing the first_element
		this->SetNodeNext(first_element);
		// set tail_ptr also pointing first_element
		this->tail_ptr = first_element;
	}
	// there are values in the list
	else
	{
		node *new_node = new node(key);

		new_node->SetNodeNext(this->GetNodeNext());

		this->SetNodeNext(new_node);

	}
}