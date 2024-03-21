#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float alasSegitiga, tinggiSegitiga, tinggiPrisma, luasPermukaan, kakiSegitiga, volume;
    cout << "Masukkan alas segitiga   = "; cin >> alasSegitiga;
    cout << "Masukkan tinggi segitiga = "; cin >> tinggiSegitiga;
    cout << "Masukkan tinggi prisma   = "; cin >> tinggiPrisma;

    kakiSegitiga = sqrt(pow(alasSegitiga, 2) + pow(tinggiSegitiga, 2));
    luasPermukaan = (alasSegitiga * tinggiSegitiga) + (tinggiPrisma * (2 * kakiSegitiga + alasSegitiga ));
    volume = (alasSegitiga * tinggiSegitiga * tinggiPrisma) / 2.0;

    cout << "Luas Permukaan = " << luasPermukaan << endl;
    cout << "Volume         = " << volume << endl;
}