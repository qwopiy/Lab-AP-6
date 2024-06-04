#include <iostream>
#include "operasi.h"
using namespace std;

void garis() {
    cout << "====================================\n";
}

void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator\n";
    garis();
    cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n5. Modulo\n6. Pangkat\n";
    garis();
}

int main() {
    int operasi,a,b;
    char ulang;
    do {
        system("cls");

        menu();
        cin >> operasi;

        cout << "Masukkan angka pertama = "; cin >> a;
        cout << "Masukkan angka kedua   = "; cin >> b;
        cout << "Hasil = ";

        switch (operasi)
        {
        case 1:
            cout << tambah(a, b);
            break;
        
        case 2:
            cout << kurang(a, b);
            break;

        case 3:
            cout << kali(a, b);
            break;

        case 4:
            cout << bagi(a, b);
            break;
        
        case 5:
            cout << modulo(a, b);
            break;

        case 6:
            cout << pangkat(a, b);
            break;

        default:
            cout << "operator tidak valid";
            break;
        }

        cout << "\napakah ingin diulang ? (y/n) = "; cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}