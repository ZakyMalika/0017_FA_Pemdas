#include <iostream>
using namespace std;
class MasukUniversitas {
	private: // isi access modifier disini
	// isi daftar variable yang dibutuhkan di bawah ini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya; 
	
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan
	
	void setUangPendaftaran(int uang) {
		this->uangPendaftaran = uang;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	void setUangSemesterPertama(int uang) {
		this->uangSemesterPertama = uang;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}
	void setUangBangunan(int uang) {
		this->uangBangunan = uang;
	}
	float getUangBangunan() {
		return uangBangunan;
	}
	void setTotalBiaya(int uang) {
		this->totalBiaya = uang;
	}
	float getTotalBiaya() {
		return totalBiaya;
	}
	

	
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
public:
	void NamaJalurMasuk() {

	}
};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
public:
	
	void NamaJalurMasuk(int uang) {
		cout << "Masukkan Uang Pendaftaran: "<< endl;
		cin >> uang;
		cout << "Masukkan Uang Semester Petama: " <<endl;
		cin >> uang;
		cout << "Masukkan Uang Bangunan: " << endl;
		cin >> uang;

	}
};
int main() {
	MasukUniversitas q;
	int b;

	do
	{
		cout << "\nPilih Jalur Masuk:\n";
		cout << "1. SNBT\n";
		cout << "2. SNBP\n";
		cout << "3. Keluar\n";
		cout << "4. exit\n";
		cout << "Pilih: ";
		cin >> b;
			
		switch (b)
		{
		case 1:
			q.namaJalurMasuk();
			q.getUangPendaftaran();
			q.getUangSemesterPertama();
			q.getUangBangunan();
			q.getTotalBiaya();
			break;
			
		case 2:
			q.getUangPendaftaran();
			q.getUangSemesterPertama();
			q.getUangBangunan();
			q.getTotalBiaya();
			break;
		case 3:
			q.getUangPendaftaran();
			q.getUangSemesterPertama();
			q.getUangBangunan();
			q.getTotalBiaya();
			break;
		case 4:
			cout << "exit...\n";
			break;
		default:
			cout << "invalid choice\n";

		}
	} while (true);
	


	return 0;
}