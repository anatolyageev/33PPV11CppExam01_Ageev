#pragma once
#include<iostream>
#include<string>
#include<list>

using namespace std;
//интерфейс = стек
struct  MyStackOverFlowProtectionExeption : public exception {
public:
	const char* what() throw() {
		return "C++ MyStackOverFlowProtectionExeption: max num of stack size exeeded.";
	}
};

struct  MyStackIsEmtyProtectionExeption : public exception {
public:
	const char* what() throw() {
		return "C++ MyStackIsEmtyProtectionExeption: Stack is empty.";
	}
};

template<class T>
class Stack
{
protected:
	Stack<T> *Body;
public:
	
	virtual void Push(T) = 0;
	virtual T Pop() = 0;
	virtual bool isEmpty() = 0;
	virtual bool isFull() = 0;
};

