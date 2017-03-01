#include <iostream>
using namespace std;

class manusia {
	public: // scope
		int tinggi;
		int beratbadan;
		int nama;

	makan () {
		cout << "makan" << endl;
			}
};
	int main () {
		manusia evinda;
		manusia ayu;
		

		evinda.tinggi = 10 ;
		cout << evinda.tinggi << endl;
		evinda.makan () ;

		ayu.tinggi = 9 ;
		cout << ayu.tinggi << endl;
		ayu.makan ();
	
	return 0;
	}