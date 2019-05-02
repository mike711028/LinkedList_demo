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


