#include "node.h"
#include <iostream>


/*      default node        */
node::node()
{
	this->node_key_ = NULL;
	this->node_next_ = NULL;
}

node::node(int key)
{
	this->node_key_ = key;
	this->node_next_ = NULL;
}

node::~node()
{
}

/*     Setting and Getting       */

void node::SetNodeKey(int key)
{
	this->node_key_ = key;
}

int node::GetNodeKey()
{
	return this->node_key_;
}

void node::SetNodeNext(node * ptr)
{
	this->node_next_ = ptr;
}

node * node::GetNodeNext()
{
	return this->node_next_;
}

/*        Front Operation         */
void node::PushFront(int key)
{
	// it's an empty list 
	if (head_ptr == NULL)
	{
		this->SetNodeKey(key);
		head_ptr = this;
		tail_ptr = this;
	}
	// there are values in the list
	else
	{
		node *new_node = new node(key);

		new_node->SetNodeNext(head_ptr);

		head_ptr = new_node;
		
	}
}

int node::TopFront()
{
	if (head_ptr == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
		return 0;
	}
	else
	{
		return head_ptr->GetNodeKey();
	}
	
}

void node::PopFront()
{
	if (head_ptr == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	// when there is a one element inside, will error
	else
	{

		// copy the address of the head_ptr
		node *temp = head_ptr;
		// make head_ptr point to the new first node
		head_ptr = head_ptr->GetNodeNext();
		// delete the old first node
		delete temp;
	}
}

/*          Back Operation       */

void node::PushBack(int key)
{
	// if it is an empty list
	if (head_ptr == NULL)
	{
		// Set new node as the first element
		this->SetNodeKey(key);
		head_ptr = this;
		tail_ptr = this;
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

int node::TopBack()
{
	if (head_ptr == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
		return 0;
	}
	else
	{
		return tail_ptr->GetNodeKey();
	}
	
}

void node::PopBack()
{
	if (head_ptr == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	else
	{
		// search for the new last node, from the beginning
		for (node *ptr = head_ptr, *next_ptr = head_ptr->GetNodeNext(); ptr != NULL; ptr = ptr->GetNodeNext())
		{
			if (next_ptr->GetNodeNext() == NULL)
			{
				this ->tail_ptr = ptr;
				tail_ptr->SetNodeNext(NULL);
				delete next_ptr;
				break;
			}
			next_ptr = next_ptr->GetNodeNext();
		}

		//// search for the new last node, from the beginning
		//for (node *ptr = head_ptr; ptr != NULL; ptr = ptr->GetNodeNext())
		//{
		//	node* next_ptr = ptr->GetNodeNext();
		//	if (next_ptr->GetNodeNext() == NULL)
		//	{
		//		tail_ptr = ptr;
		//		tail_ptr->SetNodeNext(NULL);
		//		delete next_ptr;
		//		break;
		//	}
		//}
	}
}

/*         List Array                */
void node::ListArray()
{
	if (head_ptr == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	else
	{
		std::cout << "The array is [ ";
		for (node *ptr = head_ptr; ptr != NULL; ptr = ptr->GetNodeNext())
		{
			std::cout << ptr->GetNodeKey() << " ";
		}
		std::cout << "]" << std::endl;
	}
}
