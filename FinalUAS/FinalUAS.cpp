#include <iostream>
#include <string>
using namespace std;

	const int MAX_MAHASISWA = 100;
	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];
	int jumlahMahasiswa = 0;



	void tambahMahasiswa() {

		cout << "===== Tambah Mahasiswa =====";
		cout << "NIM : ";
		cin >> NIM[MAX_MAHASISWA];

		cout << "Nama : ";
		cin >> nama[MAX_MAHASISWA];

		cout << "Tahun Masuk : ";
		cin >> tahunMasuk[MAX_MAHASISWA];


		jumlahMahasiswa++;
	}
	
	void tampilkanSemuaMahasiswa() {
		cout << "===== Data Semua Mahasiswa =====";
		cout << tambahMahasiswa << "\n" << endl;

	}
	
	void algorithmacariMahasiswaByNIM() {
		int byNIM;

		cout << "Masukkan NIM Yang Ingin Dicari : ";
		cin >> byNIM;
	}
	
	void algorithmaSortByTahunMasuk() {

	}


int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


// 2. Cirqular Queue , Double Linked List, Quick Short
// 3. Stack adalah program yang Last In First Out ( LIFO )
//		Queue Adalah Program yang First In First Out ( FIFO )
// 4. Jika kita ingin membuat program yang dimana kita akan menyimpan datanya dengan cara di tumpuk ( Program delete )
// 5. a. 4
//		b. Pre Order
		// 25 -> 20 -> 10 -> 5 -> 1 -> 8 -> 12 -> 15 -> 22 ->
		// 36 -> 30 -> 28 -> 40 - > 38 -> 48 -> 45 -> 50
