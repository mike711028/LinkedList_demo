#include "node.h"

void node::AddBack(int insert_node, int key)
{
	// It's an empty
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	// only one node
	else if (this->GetNodeNext() == this->tail_ptr)
	{
		head_ptr->PushBack(key);
	}
	// more than one node
	else
	{
		node *new_node = new node(key);
		node *ptr = this->GetNodeNext();

		for (int i = 0; i < insert_node - 1; i++)
		{
			ptr = ptr->GetNodeNext();
		}

		if (ptr->GetNodeNext() == NULL)
		{
			this->PushBack(key);
		}
		else
		{
			new_node->SetNodeNext(ptr->GetNodeNext());
			ptr->SetNodeNext(new_node);
		}
	}
	
}