#include <iostream>
#include "Loket.h"
#include "Tiket.h"
using namespace std;

void cetakJudul();
void cetakMenu();
void tentukanMenu(Loket& loket, int pilihan);

int main(){
    int pilihan = 0;
    Tiket daftarTiket[3] = { Tiket("TK001", "Gajayana", "Cirebon", 50000, 20),
                                Tiket("TK002", "Bima", "Yogyakarta", 100000, 25),
                                Tiket("TK003", "Argo Bromo", "Surabaya", 200000, 30)
        
    };
    Loket loket(daftarTiket);
    
    do{
    	cetakJudul();
    	cetakMenu();
    	do{
    		cout << "Pilih menu : ";
    		cin >> pilihan;
    		tentukanMenu(loket, pilihan);
		}while(pilihan <= 0 || pilihan > 3);
    	cout << "\n\n\n";
	}while(pilihan != 3);
    return 0;
}

void cetakJudul(){
	cout << "========================================================================" << endl;
	cout << "\t\t\tProgram Penjualan Tiket" << endl;
	cout << "========================================================================" << endl;
}

void cetakMenu(){ 
	cout << "1. Lihat Daftar Tiket" << endl;
	cout << "2. Jual Tiket" << endl;
	cout << "3. Keluar" << endl;
}

void tentukanMenu(Loket& loket, int pilihan){
	switch(pilihan){
		case 1:
			loket.cetak();
			cin.get();
			break;
		case 2:
			loket.jualTiket();
			cin.get();
			break;
	}
}
