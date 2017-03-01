#include <iostream>
using namespace std;

int main() {
	int n [ 5 ];

	for ( int i = 10; i > 5 i--) {
		n[ i ] = i + 100;
	}
	for ( int j = 10; j > 5; j--) {
		cout << "Elemen ke " << j << " : " << n[ j ] << endl;
	}

return 0;	
}