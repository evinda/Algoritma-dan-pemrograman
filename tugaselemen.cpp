#include <iostream>
using namespace std;

int main () {
   int j = 0;
   string array [10];
   cout << "Masukkan Elemen Array: "  << endl;

   for ( int i = 0 ; i < 10 ; i++) {
   	cout <<  " elemen " << i+1 << " =" ;
   	cin >> array [ i] ;

   } 
   cout << " tiap - tiap elemen " << endl;

   for ( int i = 0 ; i < 10 ; i++ ) {

   	if (array [i] == "A") {
   		j++;
   	}
   	cout << "elemen " << i+ 1 << "="  << array [i] << endl;
   }

	cout << "jumlah kemunculan elemen A = " << j;
	return 0;
}
