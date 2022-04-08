#include <iostream>
#include <string>

using namespace std;


void input_07434();
void proses_harga_tenda_07434();
void proses_total_harga_sewa_07434();
void output_07434();

struct Data_Penyewaan_tenda_07434
{
	string nama_penyewa_07434;
	int input_tipe_tenda_07434;
	int lama_sewa_perhari_07434;
	long harga_07434;
	long total_harga_sewa_07434;
}Data_Penyewaan_tenda_07434 [100];


int jumlah_penyewa_07434;

void main()
{
	input_07434();
	proses_harga_tenda_07434();
	proses_total_harga_sewa_07434();
	output_07434();
}

void input_07434()
{
		
	cout << "masukkan jumlah penyewa : ";
	cin >> jumlah_penyewa_07434;
	cin.ignore();
	cout << endl;
	system("cls");
	for (int perulangan_1_07434 = 1; perulangan_1_07434 <= jumlah_penyewa_07434; perulangan_1_07434++)
	{
		cout << perulangan_1_07434 << ". data penyewa ke - " << perulangan_1_07434 << endl << endl;
		cout << "masukkan nama penyewa tenda = ";
		getline(cin, Data_Penyewaan_tenda_07434[perulangan_1_07434].nama_penyewa_07434);
		cout << endl;
		
		cout << "masukkan tipe tenda : \n";
		cout << "1. harga tenda kecil  = Rp. 500.000 \n";
		cout << "2. harga tenda sedang = Rp. 600.000 \n";
		cout << "3. harga tenda besar  = Rp. 700.000 \n";
		cout << "masukkan nomor tipe tenda (1,2,3) = ";
		cin >>Data_Penyewaan_tenda_07434[perulangan_1_07434].input_tipe_tenda_07434;
		cout << endl;

		cout<<"masukkan lama sewa perhari : ";
		cin >> Data_Penyewaan_tenda_07434[perulangan_1_07434].lama_sewa_perhari_07434;
		cin.ignore();
		system("cls");
	}
	
}

void proses_harga_tenda_07434()
{
	for (int perulangan_1_07434 = 1; perulangan_1_07434 <= jumlah_penyewa_07434; perulangan_1_07434++)
	{
		if (Data_Penyewaan_tenda_07434[perulangan_1_07434].input_tipe_tenda_07434 == 1)
		{
			Data_Penyewaan_tenda_07434[perulangan_1_07434].harga_07434 = 500000;
		}
		else if (Data_Penyewaan_tenda_07434[perulangan_1_07434].input_tipe_tenda_07434 == 2)
		{
			Data_Penyewaan_tenda_07434[perulangan_1_07434].harga_07434= 600000;
		}
		else
		{
			Data_Penyewaan_tenda_07434[perulangan_1_07434].harga_07434= 700000;
		}
	}
}

void proses_total_harga_sewa_07434()
{
	for (int perulangan_1_07434 = 1; perulangan_1_07434 <= jumlah_penyewa_07434; perulangan_1_07434++)
	{
		Data_Penyewaan_tenda_07434[perulangan_1_07434].total_harga_sewa_07434 = Data_Penyewaan_tenda_07434[perulangan_1_07434].harga_07434 * Data_Penyewaan_tenda_07434[perulangan_1_07434].lama_sewa_perhari_07434;
	}
}

void output_07434()
{
	for (int perulangan_1_07434 = 1; perulangan_1_07434 <= jumlah_penyewa_07434; perulangan_1_07434++)
	{
		cout << "data penyewa ke - " << perulangan_1_07434 << endl;
		cout << "nama penyewa = " << Data_Penyewaan_tenda_07434[perulangan_1_07434].nama_penyewa_07434 << endl;
		cout << "Lama Sewa Perhari = " << Data_Penyewaan_tenda_07434[perulangan_1_07434].lama_sewa_perhari_07434 <<endl;
		cout << "harga = " << Data_Penyewaan_tenda_07434[perulangan_1_07434].harga_07434 <<endl;
		cout << "total harga sewa yang harus dibayar : Rp. " << Data_Penyewaan_tenda_07434[perulangan_1_07434].total_harga_sewa_07434;
		cout << endl << endl;
	}

}