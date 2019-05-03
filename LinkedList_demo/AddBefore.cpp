#include "node.h"



void node::AddBefore(int insert_node, int key)
{
	// It is an empty list
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	// there is only one node in the list
	// or
	// insert_node is 1 ( insert node before the first node
	else if (this->GetNodeNext() == this->tail_ptr || insert_node == 1)
	{
		this->PushFront(key);
	}
	else
	{
		node* new_node = new node(key);
		node *ptr = this->GetNodeNext();

		for ( int i = 0; i < insert_node - 2; i++)
		{
			ptr = ptr->GetNodeNext();
		}

		new_node->SetNodeNext(ptr->GetNodeNext());
		ptr->SetNodeNext(new_node);

	}
	
	
}