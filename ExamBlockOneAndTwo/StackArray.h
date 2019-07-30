#pragma once
#include "Stack.h"

template<class T>
class StackArray: public Stack<T>
{
public:
	StackArray(int sizestack);
	~StackArray();
	virtual bool isEmpty();
	virtual bool isFull();
	virtual T Pop();
	virtual void Push(T);
private:
	T* pArray;
	int pos;
	int size;
};

