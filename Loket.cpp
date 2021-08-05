#include <iostream>
#include "Loket.h"
using namespace std;

Loket::Loket(Tiket* t){
	daftarTiket = t;
}

void Loket::jualTiket(){
    string kodeTiket;
    int jumlah;
    do{
        cout << "Masukan kode tiket : ";
        cin >> kodeTiket;
    }while(validasiKodeTiket(kodeTiket) == -1);
    int index = validasiKodeTiket(kodeTiket);
    daftarTiket[index].displayDetail();
    do{
        cout << "Masukan jumlah tiket yang ingin dipesan : ";
        cin >> jumlah;
    }while(!validasiJumlahTiket(index, jumlah));
    cout << "Total biaya : " << hitungBiaya(index, jumlah) << endl;
    daftarTiket[index].updateStok(jumlah);
}



int Loket::validasiKodeTiket(string kodeTiket){
    int i;
    for(i = 0; i < 3; i++){
        if(kodeTiket == daftarTiket[i].getKodeTiket()){
            return i;
        }
    }

    return -1;
}

bool Loket::validasiJumlahTiket(int index, int jumlah){
    if(daftarTiket[index].getStok() - jumlah >= 0)
        return true;

    return false;
}

int Loket::hitungBiaya(int index, int jumlah){
    return daftarTiket[index].getHargaTiket() * jumlah;
}

void Loket::cetak(){
	cetakHeading();
	int i = 0;
	for(i = 0; i < 3; i++){
		cetakBarang(daftarTiket[i]);
	}
}

void Loket::cetakHeading(){
	cout << "============================================================" << endl;
	cout << "| Kode Tiket | Nama Kereta |  Tujuan  | Harga Tiket | Stok |" << endl;
	cout << "============================================================" << endl;
}

//tambahan
Loket::~Loket(){
	delete daftarTiket;
}
