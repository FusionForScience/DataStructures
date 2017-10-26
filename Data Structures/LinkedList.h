#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "DataStructure.h"
#include "Node.h""


template <typename T>
class LinkedList : public DataStructure<T>
{
	public:
		LinkedList() : DataStructure<T>() , _head(NULL)
		{
			_size = 0;
		}


		/**
		 * Adds data to the linked list
		 */
		void push(const T DATA)
		{
			if (_size == 0)
			{
				_head = new Node<T>(DATA);
			}

			_head->next = new Node<T>(DATA);
			_size++;
		}


		T& operator [](const int INDEX) const
		{
			Node<T> *temp = _head;

			for (int i = 0; i < _size; i++)
			{
				if (i == INDEX)
				{
					return temp->data;
				}
				temp = temp->next;
			}
		}

	private:
		Node<T> *_head;
};


#endif