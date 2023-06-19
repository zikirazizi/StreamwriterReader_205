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

	//unlimited loop untuk menulis 
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda masukkan karakter q
		if (baris == "a") break;
		//Menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai daam menulis sekarang tutup file
	outfile.close();

	//Membuka file dalam mode membaca 
	ifstream infile;
	//Menunjuk ke sebbuah file 
	infile.open("contohfile.txt");

	cout << endl << ">=Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{

		//Melakukan perulangan setiap baris 
		while (getline(infile, baris))
		{
			//dan tampilkan di sini 
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();

	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;




	