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

	/*    Find Value     */

	bool FindValue(int key);
	
	/*   Erase value    */

	void Erase(int key);

	/*    List Array    */
	void ListArray();

	/*    Empty LIst?  */
	bool Empty();

	/*   Add Before    */
	void AddBefore(int insert_node, int key);

	/*   Add Back	   */
	void AddBack(int insert_node, int key);

};