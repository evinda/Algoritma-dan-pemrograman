#include  <iostream>
#include  <cstdlib>
// I.S Program Kalkulator
// F.S  Menampilkan Hasil program Kalkulator

using namespace std;

int main () { // Fungsi bawaan Main Jalankan Otomatis

	float  a,b; //buat Variable a dan b dengan tipe Float
	int kode; //buar Variable kode dengan typr integer


	kode = 0; //berikan kode dengan nilai default 0

	menu:
	cout << "Kalkulator Sederhana C++ \n";
	cout << "UTS C++ \n\n";
	cout << "Pilihan Menu : \n";
	cout << "1.Penjumlahan (+) \n";
	cout << "2.Pengurangan (-) \n";
	cout << "3.Perkalian (*) \n";
	cout << "4.Pembagian (/) \n \n";
	cout << "5.Perhitungan Nilai UTS Mahasiswa \n \n";
	cout << "Silakan Masukan Kode Menu : " ; 
	cin >> kode;
	if (kode != 0) { // Perbandingan jika nilai kode tidak sama dengan 0  maka False akan tampil  "kode belum di isi"
		if (kode > 5 || kode < 1 ) { // pengecekan kode jika melebihi batas 5 maka tidak ad
			cout << "\nKode yang anda masukkan Tidak ada \nSilakan masukkan ulang kode.";
			system ("pause"); //fungsi bawaan pause
			system ("cls");
			goto menu ; // kembali ke menu
		}
		else {
			if (kode == 5) { //Fugsi perbandingan jika nilai kode sama dengan 5 maka true

				cout << "Silakan Masukan nilai Mahasiswa : " ; 
				cin >> a; //fungsi input variable a
				cout << "Silakan masukkan Batas Nilai UTS : "  ; 
				cin >> a; //fungsi input variable b
				if( a >= b){ //perbandingan jika a lebih besar sama dengan b maka true
					cout << ",\nHasil penjumlahan UTS mahasiswa "<<a<<" dengan batas Nilai UTS adalah "<<b<<" maka anda : LULUS "<<endl;
				}
				else if( a <= b){ //perbandingan jika a lebih besar sama dengan b maka true
					cout << ",\nHasil penjumlahan UTS mahasiswa "<<a<<" dengan batas Nilai UTS adalah "<<b<<" maka anda : TIDAK LULUS "<<endl;
				}
			} else {
				cout << "masukkan angka pertama : " ;
				cin >> a ; //fungsi input variable a
				cout << "masukkan angka kedua : " ;
				cin >> b ; //fungsi input variable b
				if (kode == 1) { // Fungsi perbandingan jika nilai kode sama dengan 1 maka true
				   cout << "\nhasil penjumlahan dari " << b <<" adalah :"<< a + b << endl; // tampilkan hasil operasi tambah
				}
				if (kode == 2) { // Fungsi perbandingan jika nilai kode sama dengan 1 maka true
				   cout << "\nhasil pengurangan dari " << b <<" adalah :"<< a - b << endl; // tampilkan hasil operasi kurang
				}
				if (kode == 3) { // Fungsi perbandingan jika nilai kode sama dengan 1 maka true
				   cout << "\nhasil perkalian dari " << b <<" adalah :"<< a * b << endl; // tampilkan hasil operasi kali
				}
				if (kode == 4) { // Fungsi perbandingan jika nilai kode sama dengan 1 maka true
				   cout << "\nhasil pembagian dari " << b <<" adalah :"<< a / b << endl; // tampilkan hasil operasi bagi
				}

				}
	}
}else {
	cout << "\nkode belum di isi " << endl ;
}
return 0 ;
}