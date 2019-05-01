#include "node.h"


void node::PopFront()
{
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	// when there is a one element inside, will error
	else
	{

		// copy the address of the first node rather than head_ptr
		node *temp = this->GetNodeNext();
		// make head_ptr point to the new first node
		this->SetNodeNext(this->GetNodeNext()->GetNodeNext());
		// delete the old first node
		delete temp;
	}
}