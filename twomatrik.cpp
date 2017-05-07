#include <iostream>
using namespace std;
// Penjumlahan dua matriks
// Proses Penjumlahan dua matriks

int main () {
	int M[3] [3];
	int M1[3] [3];
	int M2[3] [3];

	for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
	 cout << "Masukan Nilai Matrik 1 pada indeks baris ke" << i << " kolom ke " << j << " : " ;
	 cin >> M1 [i] [j] ;
	 cout << "Masukan Nilai Matrik 2 pada indeks baris ke" << i << " kolom ke " << j << " : " ;
	 cin >> M2 [i] [j] ;

	 M[i] [j] = M1[i][j] + M2[i] [j] ;

		}
	} 
	cout << " ===========MATRIK===========" <<endl;

	for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {

	cout << "|" << M[i] [j] << "\t";
	cout << "|" << endl;
	cout << " ===========================" << endl;
	}

	return 0;
}
	}