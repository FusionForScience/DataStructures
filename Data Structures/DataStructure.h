/**
 * Programmer:		Matthew Fan
 * Date Created:	10/24/17
 */
#ifndef DATA_STRUCTURE_H
#define DATA_STRUCTURE_H


#include <iostream>


/// Abstract class for data structures
template <typename T>
class DataStructure
{
	public:
		DataStructure<T>() : _size(0) {}


	protected:
		int _size;


	private:

};


#endif
