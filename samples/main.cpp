#include "stack.h"
#include "stack.cpp"


/*int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

*/

int main()
{


	TDynamicStack<int> st(10);

	for (int i = 0; i < 10; i++)
		st.Push(i + 1);
	cout << "after 10 x push(): " << endl;
	cout << st << endl << endl;
	
	cout << "getSize():" << endl;
	cout << st.getSize() << endl << endl;

	st.Pop();
	cout << "after 1 x pop(): " << endl;
	cout << st << endl << endl;

	

	cout << "isEmpty():" << endl;
	cout << st.IsEmpty() << endl << endl;

	return 0;
}

