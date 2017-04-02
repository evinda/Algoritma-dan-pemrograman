#include <iostream>
using namespace std;

int main () {
	int angka, jumlah ,max ,min ;

	cout << "menentukan nilai  maxsimum dan minimum dari data yang dimasukkan" <<endl;
	cout << endl;
	cout << "masukkan jumlah angka :" ;
	cin  >> jumlah;
	cout << endl;

	for (int i = 1; i <= jumlah; i++) {
		cout << " masukkan angka :" ;
		cin >> angka ;

	if ( i == 1 ) {
		min = angka;
		max = angka;
	}
	else if ( max > angka) {
		min = angka;
	}
	else if ( min < angka) {
		max = angka;	
	}
	else {}

}
	cout << endl;
	cout <<"nilai terkecil :" << min<< endl;
	cout <<"nilai terbesar :" << max<< endl;
 return 0;
}