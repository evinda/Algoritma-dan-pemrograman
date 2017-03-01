#include <iostream>
using namespace std;

int main() {
	int *ptr = NULL;
	// Coba int *ptr;

	cout << "The value of ptr is" << ptr;
	if (ptr) 
		 cout << "not null";
		else
			cout << "null";

		if (!ptr) 
			cout << "null";
		else
			cout << "not null";

 
	
return 0;
}