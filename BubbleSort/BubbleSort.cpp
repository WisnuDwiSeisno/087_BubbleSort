#include <iostream>
using namespace std;
int a[20];		// Deklarasi Array a dengan ukuran 20
int n;			// Deklarasi Variabel n untuk menyimpan banyaknya elemen pada array

void input() {		// prosedur untuk input
	while (true) {	//Looping
		cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
		cin >> n;	//input dari pengguna
		if (n <= 20)	//jika n kurang dari atau sama dengan 20
			break;	// keluar dari loop
		else {		// jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; // Output ke layar
		}
	}
	cout << endl;					// Output baris kosong
	cout << "====================" << endl; //Output ke layar
	cout << "Masukan Elemen Array" << endl; //Output ke layar
	cout << "====================" << endl; //Output ke layar

	for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";	// Output ke layar
		cin >> a[i];		//input dari pengguna
	}
}
void BubbleSortArray() {		//prosedur untuk mengurutkan array dengan metide bubble sort
	for (int i = 1; i < n; i++) {		// Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {		// Looping dengan j dimulai dari 0 hingga n-i
			if (a[j] > a[j + 1]) {		//jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];		// simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];		// assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;		//assign nilai temp ke a[j+1]
			}
		}
	}
}

void unsorted() {
	cout << endl;		//output baris kosong
	cout << "=================================" << endl; //Output Baris Kosong
	cout << "Element Array yang belum tersusun" << endl;	//Output Baris layar
	cout << "=================================" << endl; //Output Baris Kosong
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
}

void display() {		// procedur untuk menampilkan hasil 
	cout << endl;		//output baris kosong
	cout << "=================================" << endl;		// output ke layar
	cout << "Element Array yang telah tersusun" << endl;		// output ke layar
	cout << "=================================" << endl;		// output ke layar
	for (int j = 0; j < n; j++) {		// Looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;		// output ke layar
	}
	cout << endl;		// output baris kosong
}
int main() {
	input();
	unsorted();
	BubbleSortArray();
	display();
	return 0;
}

