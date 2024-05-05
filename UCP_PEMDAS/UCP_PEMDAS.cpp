//JAWABAN TEORI
//1. int, string, float
//2. contoh prosedur void : Void nama_prosedur (daftar paramenter)
//          fungsi        : tipe_data untuk prosedur/fungsi
//3. contoh looping do while dimana perulangan terjadi setelah statement. 
//   contoh: do {
//           statement;
//           } while
//4. conditional statement dimana kita bisa mengetahui kondisi dengan diuji.
//   contoh: if (nBil<5)
//           begin
//             display 'bilangan dibagi 5'
//           End
//5. contoh: struct mahasiswa {
//           string nim;
//           string nama;
//           int alamat;
//           };

#include <iostream>
#include <string>
using namespace std;

struct Lokasi{
	string namakota;
	string status;
};

struct status {
	int sehat;
	int tidaksehat;
	Lokasi alamat;
};

int main() {
	Lokasi mhs;2
	cout << "Nama Kota : ";
	cin >> mhs.namakota;
	cout << "Status: ";
	cin >> mhs.status;

	cout << "Tanggerang : " << endl;
	cout << "\t Tanggerang : ";
	cin >> mhs.status.tidaksehat;
	cout << "\t Bekasi : ";
	cin >> mhs.status.sehat;
	cout << endl;

	cout << "\n Nama Kota : " << mhs.namakota;
	cout << "\n Status : " << mhs.status;
	cout << "\n Tanggerang : " << mhs.status.tidaksehat;
	cout << "\n Bekasi : " << mhs.status.sehat;

}
