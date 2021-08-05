#ifndef LOKET_H
#define LOKET_H

#include "Tiket.h"
using namespace std;

class Loket{

    private:
    Tiket* daftarTiket; 

    public:
    Loket(Tiket* t);
    ~Loket();
    void cetak(); 
    void cetakHeading();
    void jualTiket();
    int validasiKodeTiket(string kodeTiket);
    bool validasiJumlahTiket(int index, int jumlah);
    int hitungBiaya(int index, int jumlah);
};
#endif
