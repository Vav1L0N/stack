#include "stack.h"

int main()
{
	
	TDynamicStack<int> stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);

	cout << "Stack contents: " << stack << endl;
}

