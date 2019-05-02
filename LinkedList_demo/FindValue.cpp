#include "node.h"


bool node::FindValue(int key)
{
	// check whether it is NULL list
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
		return false;
	}
	else
	{
		// check it from the beginning
		for (node *ptr = this->GetNodeNext(); ptr != NULL; ptr = ptr->GetNodeNext())
		{
			// match it with input value
			if (ptr->GetNodeKey() == key)
			{
				std::cout << key << " is in the list" << std::endl;
				// return true
				// "return" will finish this function directly 
				return true;
				// don't need "break", use "return"
				//break;
			}
		
		}

		std::cout << "It's not in the list" << std::endl;
		return false;
	}
}