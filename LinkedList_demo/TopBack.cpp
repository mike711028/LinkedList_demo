#include "node.h"


int node::TopBack()
{
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
		return 0;
	}
	else
	{
		return tail_ptr->GetNodeKey();
	}

}