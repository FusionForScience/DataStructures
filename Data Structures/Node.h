#ifndef NODE_H
#define NODE_H

#include <iostream>


template <typename T>
class Node
{
	public:
		T data;
		Node *next;


		/**
		 * Creates a new node with given data, pointing to NULL
		 */
		Node(const T &DATA) : data(DATA) , next(NULL) {}


		/**
		 * Destructor
		 */
		~Node()
		{
			delete next;
		}
};


#endif