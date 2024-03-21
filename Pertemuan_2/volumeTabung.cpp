#include <iostream>
#define pi 3.14

using namespace std;

int main() {
    float r, t, volume;
    cout << "masukkan jari-jari = "; cin >> r;
    cout << "masukkan tinggi    = "; cin >> t;

    volume = pi * r * r * t;
    
    cout << "volume = " << volume << endl;
}