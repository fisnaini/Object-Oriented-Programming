#ifndef TIKET_H
#define TIKET_H
#include <string>
using namespace std;

class Tiket{
    friend void cetakBarang(Tiket tiket);
    private:
    string kodeTiket;
    string namaKereta;
    string tujuan;
    int hargaTiket;
    int stok;

    public:
    Tiket(string kodeTiket, string namaKereta, string tujuan, int hargaTiket, int stok);
    string getKodeTiket();
    int getStok();
    int getHargaTiket();
    void displayDetail();
    void updateStok(int jumlah);
};
#endif
