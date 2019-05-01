#include "node.h"


int node::TopFront()
{
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
		return 0;
	}
	else
	{
		// get the value from the first element rather than the head_ptr
		return this->GetNodeNext()->GetNodeKey();
	}

}