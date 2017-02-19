#include <iostream>
using namespace std;
 
 int main () {
   int a, b, c, i;

   for ( i = 0; i < 3; i++) {
   	cout  << "\nMasukan 2 angka: \n" ;
   	cin >> a >> b ;
   	//break

   	if (b ==0) {
    cout  << " \nAngka ke dua tidak boleh 0." ;
   	} else {
   		c = a/b;
   		cout << "\nAngka 1 / Angka 2 = " << c << "\n";
}
 
} return 0;
}