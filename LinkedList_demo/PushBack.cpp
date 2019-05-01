#include "node.h"

void node::PushBack(int key)
{
	// if it is an empty list
	if (this->GetNodeNext() == NULL)
	{
		// Set new node as the first node
		node *first_node = new node(key);
		// Set head_ptr pointing to the first node
		this->SetNodeNext(first_node);
		// Set tail_ptr pointing to the first node as well
		this->tail_ptr = first_node;
	}
	else
	{
		node *new_node = new node(key);
		// the old last node points to the new last node
		tail_ptr->SetNodeNext(new_node);
		// tial_ptr points to the new last node(new_node)
		tail_ptr = new_node;
	}
}