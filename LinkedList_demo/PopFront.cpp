#include "node.h"


void node::PopFront()
{
	if (this->GetNodeNext() == NULL)
	{
		std::cout << "It's an empty list" << std::endl;
	}
	// there are more than one node by checking node_next_
	else if(this->GetNodeNext()->GetNodeNext() != NULL)
	{
	
		// copy the address of the first node rather than head_ptr
		node *temp = this->GetNodeNext();

		// make head_ptr point to the new first node
		this->SetNodeNext(this->GetNodeNext()->GetNodeNext());
		// delete the old first node
		delete temp;
	}
	// there is only one node
	else
	{
		node *temp = this->GetNodeNext();
		this->SetNodeNext(NULL);
		this->tail_ptr = NULL;
		delete temp;
	}
}