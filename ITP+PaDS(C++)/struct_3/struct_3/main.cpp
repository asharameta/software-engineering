#include <iostream>
#include "Header.h"
using namespace std;



int main()
{

	Stack st;
	Stack* stk = nullptr;
	st.add(1, &stk);
	st.add(2, &stk);
	st.add(3, &stk);
	st.add(4, &stk);
	st.add(5, &stk);

	cout << "Stack: " << endl;

	st.show(stk);


	cout << "Amount numbers in Stack: " << st.GetSize() << endl;

	//st.pop(3, &stk);

	//cout << "After pop: " << endl;

	//st.show(stk);

	//cout << "Amount numbers in Stack: " << st.GetSize() << endl;


	st.clear(stk);
	cout << "Stack was cleared!" << endl;

	st.show(stk);

	cout << "Amount numbers in Stack: " << st.GetSize() << endl;

	

	return 0;
}