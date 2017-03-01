#include <iostream>
using namespace std;

int main() {
 int A = 20;
 	int *p;

 	p = &A;

 	cout << " Nilai dari A :" ;
 	cout << A << endl;

 	cout << "Alamat variabel A :" ;
 	cout << p << endl;

 	cout << "Nilai dari *p:" ;
 	cout << *p << endl;

return 0;	
}