#include <fstream>
#include <iostream>
#include  <string>
using namespace std;

int main() {
	string baris;
	string Namafile;

	cout << "Masukkan Nama File : ";
	cin >> Namafile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(Namafile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	