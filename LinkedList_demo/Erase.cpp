#include "node.h"


void node::Erase(int key)
{
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	else
	{
		for (node *ptr = this->GetNodeNext(), *next_ptr = ptr->GetNodeNext(); ptr != NULL; ptr = ptr->GetNodeNext())
		{
			
			if (ptr->GetNodeNext() == NULL && ptr->GetNodeKey() != key)
			{
				std::cout << "the value is not in the list" << std::endl;
				break;
			}
			else if (next_ptr->GetNodeKey() == key)
			{
				ptr->SetNodeNext(next_ptr->GetNodeNext());
				delete next_ptr;
				break;
			}
			next_ptr = next_ptr->GetNodeNext();
		}
		
	}
}