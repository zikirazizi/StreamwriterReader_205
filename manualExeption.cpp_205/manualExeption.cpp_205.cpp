#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
			throw 0.5; //melemparkan sbuah integer maka
			cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka block ini akan dieksekusi*/
		cout << "default pengecualian akan dieksekusi" << endl;
	}
	return 0;
}