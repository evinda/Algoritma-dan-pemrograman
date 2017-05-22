#include <iostream>
using namespace std;
 int main () {

 int X[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
 int cari, i, j, k;

 cout << "Masukan nilai data yang akan di cari : " ;
 cin >> cari ;

 i = 0;
 j = 9;
 k = (i +j) /2;

 while ( i <= j) {
 if ( X[k] == cari ){
  cout << "Nilai data di temukan pada indeks ke " << k;
  break;
 }
 else if (X[k] == cari) { i = k +1 ;}
 else { j = k - 1 ;}

 k = (i + j) /2;
 }
 if ( i > j) {
 cout << "Nilai data tidak di temukan" ;
 }
 

 return 0;
 }