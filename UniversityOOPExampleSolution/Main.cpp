#include <iostream>
#include "Manager.h"
#include "Students.h"

int main() {
	Student st{ "Alex", 14, 9 };
	
	cout << "Before: " << st.convert() << endl;
	st.setMark(52);
	cout << "After: " << st.convert() << endl;

	return 0;
}
