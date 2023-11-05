#pragma once
#include <iostream>
using namespace std;
//#include "gtest.h"

template<typename T>
class TDynamicStack
{
	int top;
	size_t memSize;
	T* pMem;
public:

	TDynamicStack(size_t _memSize = 1) : top(-1), memSize(_memSize), pMem(new T[memSize]) { }
	~TDynamicStack() { delete[] pMem; }
	size_t size() const { return top + 1; }
	bool IsEmpty() const { return top == -1; }
	bool IsFull() const { return top == memSize - 1; }
	T Pop() { 
		if (IsEmpty()) {
			throw std::out_of_range("Stack is empty");
		}		
		return pMem[top--]; 
	}
	
	void Push(const T& val) {
		if (top == memSize - 1) {
			T* tmpMem = new T[memSize * 2];
			std::copy(pMem, pMem + memSize, tmpMem);
			delete[] pMem;
			pMem = tmpMem;
			memSize *= 2;
		}
		pMem[++top] = val;
	}
	T Peek() const {
		if (IsEmpty()) {
			throw std::out_of_range("Stack is empty");
		}
		return pMem[top];
	}
	int getSize()
	{
		return memSize;
	}

	bool operator==( TDynamicStack& other)  {
		if (size() != other.size()) {
			return false;
		}

		for (int i = 0; i <= top; i++) {
			if (pMem[i] != other.pMem[i]) {
				return false;
			}
		}
		return true;
	}
	bool operator!=(TDynamicStack& other) {
		return !(*this == other);
	}
	friend ostream& operator<<(ostream& os, const TDynamicStack& stack) {
		for (int i = stack.top; i >= 0; --i) {
			os << stack.pMem[i] << " ";
		}
		return os;
	}
	friend istream& operator>>(istream& is, TDynamicStack& stack) {
		T value;
		is >> value;
		stack.Push(value);
		return is;
	}

};
