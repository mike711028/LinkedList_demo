#include "node.h"


void node::PopBack()
{
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	else
	{
		// search for the new last node, from the beginning
		for (node *ptr = this->GetNodeNext(), *next_ptr = ptr->GetNodeNext(); ptr != NULL; ptr = ptr->GetNodeNext())
		{

			// If there is one node existing
			if (next_ptr == NULL)
			{
				// set node_set_ of head_ptr pointing NULL
				this->SetNodeNext(NULL);
				// set tail_ptr pointing NULL
				this->tail_ptr = NULL;
				delete ptr;
				break;
			}
			// there are more than one node
			// searching the second-last node
			else if (next_ptr->GetNodeNext() == NULL)
			{
				this->tail_ptr = ptr;
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