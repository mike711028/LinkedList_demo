#include "node.h"


bool node::Empty()
{
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It is an empty list" << std::endl;
		return true;
	}
	else
	{
		std::cout << "It is not empty" << std::endl;
		return false;
	}
}
