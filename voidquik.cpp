#include <iostream>
using namespace std;
	
	int main() {

		int N ;
		cout << " masukkan jumlah elemen array:";
		cin >> N;
		int A [N] ;

		for (int i = N; i > 0; i--) {
			A [i] = i ;
			cout << A [i] << endl;
		}
		cout << endl;

		for (int j = 1; j <= N; j++) {
			cout << A [j] << endl;
		}


	return 0;
	}
// untuk menurutkan dari yang kecil  ke yang besar

	void quicksort(int arr[], int left ,int right) {
		int i = left , j = right;
		int tmp;
		int pivot = arr [(left+right) / 2];	

		/*partition */
		while (i <= j) {
			while ( arr [i] < pivot)
				i++;
			while ( arr [j] < pivot )
				j--;
			if (i <= j) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr [j] = tmp;
				i++;
				j--;	
			}	

		};
		/*recursion */
		if (left < j) 
			quicksort (arr, left, j); // memanggil dirinya sendiri
		if (i < right)
			quicksort (arr, i ,right);

		}