#include "node.h"



void node::ListArray()
{
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	else
	{
		std::cout << "The array is [ ";
		for (node *ptr = this->GetNodeNext(); ptr != NULL; ptr = ptr->GetNodeNext())
		{
			std::cout << ptr->GetNodeKey() << " ";
		}
		std::cout << "]" << std::endl;
	}
}