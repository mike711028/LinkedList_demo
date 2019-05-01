#pragma once
#include <iostream>

class node
{
private:

	int node_key_;
	node *node_next_;

public:

	node *head_ptr = NULL;
	node *tail_ptr = NULL;

	// default value with all NULL
	// have to declare this as "head pointer" at the beginning in main func
	node();

	// create a new node for operation(Pushback, PopFront...)
	// assign key into node_key_
	node(int key);

	// deconstrutor
	~node();


	// Setting and getting "node_key_" in the node
	void SetNodeKey(int key);
	int GetNodeKey();

	// Setting and getting "node_next_" in the node
	void SetNodeNext(node *ptr);
	node *GetNodeNext();

	/*   Front Operation   */

	void PushFront(int key);
	int TopFront();
	void PopFront();

	/*   Back Operation  */

	void PushBack(int key);
	int TopBack();
	void PopBack();

	/*    List Array    */
	void ListArray();


};