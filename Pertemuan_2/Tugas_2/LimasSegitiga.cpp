#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float alas, tinggiAlas, luasAlas, tinggiPrisma, luasPermukaan, volume;
    cout << "Masukkan Alas = "; cin >> alas;
    cout << "Masukkan tinggi Alas = "; cin >> tinggiAlas;


    luasAlas = alas * tinggiAlas /2.0;
    tinggiPrisma = sqrt((pow(tinggiAlas, 2)) -(1/4 * pow(alas, 2)));
    luasPermukaan = luasAlas * 4.0;
    volume = 1.0/3.0 * tinggiPrisma * luasAlas;

    cout << "Luas Permukaan = " << luasPermukaan << endl;
    cout << "Volume = " << volume;
}