// Buatlah program untuk menentukan sebuah bilangan ganjil atau genap

#include <iostream>
using namespace std;

main () {
    int bil;
    cout << "Masukkan bilangan = "; cin >> bil;

    string jenis = (bil % 2 == 0) ? "genap" : "ganjil" ;
    cout << jenis << endl;
}