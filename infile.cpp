#include  <iostream>
# include <iostream>

//I.S Membuat Aplikasi Stream menuju File
//F.S Menampilkan Hasil Input kepada Output File .txt

using namespace std;

int main () {

	//Kamus
	char data [100];

	//Buka file
	ofstream outfile;
	outfile.open ("Text.txt") ;

	cout << " Writing to the file" << endl;
	cout << " Enter Your Name: ";
	cin.getline(data, 100);

	//Tulis data ke file
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();

	//Tulis data ke file
	outfile << data << endl;

	//Class File
	 outfile.close();

	 //Buka file
	 ifstream infile;
	 infile.open("Text.txt");

	 cout << "Reading from the file" << endl;
	 infile >> data;

	 //Baca dari file lalu, tampilkan
	 cout << data << endl;
	 infile >> data;
	 cout << data << endl;

	 //class file
	 infile.close();

	 return 0;

}