#include <iostream>
#include <iomanip>
#include "Tiket.h"
using namespace std;

Tiket::Tiket(string kodeTiket, string namaKereta, string tujuan, int hargaTiket, int stok){
    this->kodeTiket = kodeTiket;
    this->namaKereta = namaKereta;
    this->tujuan = tujuan;
    this->hargaTiket = hargaTiket;
    this->stok = stok;
}

string Tiket::getKodeTiket(){
    return this->kodeTiket;
}

int Tiket::getStok(){
    return this->stok;
}

int Tiket::getHargaTiket(){
    return this->hargaTiket;
}

void Tiket::displayDetail(){
    cout << "Detail tiket sebagai berikut : " << endl;
    cout << "Kode tiket : " << this->kodeTiket << endl;
    cout << "Nama kereta : " << this->namaKereta << endl;
    cout << "Tujuan : " << this->tujuan << endl;
    cout << "Harga tiket : " << this->hargaTiket << endl;
    cout << "Stok : " << this->stok << endl;
}

void Tiket::updateStok(int jumlah){
    this->stok -= jumlah;
}

void cetakBarang(Tiket tiket){
    cout << "|" << left << setw(12) << tiket.kodeTiket;
    cout << "|" << left << setw(13) << tiket.namaKereta;
    cout << "|" << left << setw(10) << tiket.tujuan;
    cout << "|" << left << setw(13) << tiket.hargaTiket;
    cout << "|" << left << setw(6) << tiket.stok;
    cout << "|" << endl;
}

