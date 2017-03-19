#include <iostream>
using namespace std;

// I.S  Program Aplikasi menghitung rata-rata IPK
// F.S  Program Menampilkan proses pencari IPK

int main () { 

//kamus
	float IP, total = 0 , rata ;
	int Mahasiswa = 0;
	int lulus = 0;
	int tidaklulus = 0;
	//output
		cout << "Masukan Nilai IPK : ";
		cin >> IP;
	// Pengulangan Nilai IPK
	while(IP != -999) {
		//Penghentian jika pengguna mengetik -999
	if ( IP >= 0 && IP <= 4) {
			// Increment Nilai Mahasiswa yang termasuk IP 0 - 4

	if ( IP >= 2.75 ) { lulus ++;}
	if ( IP <= 2.75 ) { tidaklulus ++;}

	// Mencari nilai rata-rata
	total = total + IP;
	Mahasiswa++;}
		
		cout << "Masukan Nilai IPK : ";
		cin >> IP;

	
	}
		//Menampilkan Banyak Mahasiswa
		cout << "Total Jumlah Mahasiswa : " << Mahasiswa << endl;
		//Menampilkan Jumlah Mahasiswa Yang Lulus
		cout << " Jumlah Mahasiswa LULUS : " << lulus << endl ;
		//Menampilkan Jumlah Mahasiswa Yang Tidak Lulus
		cout << " Jumlah Mahasiswa Tidak LULUS : " << tidaklulus <<endl;
	
		rata = total / Mahasiswa ;
		//Menampilkan Rata-rata Mahasiswa dikelas
		cout << " RATA - Rata NIlai Mahasiswa :" << rata ;

	return 0 ;
}