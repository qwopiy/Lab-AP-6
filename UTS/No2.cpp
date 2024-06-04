#include <iostream>
using namespace std;

int main() {
    string masuk; 
    int keluar = 0;
    int n;
    cout << "Input (tidak boleh negatif) = "; cin >> masuk;

    for (int i = 0; i < masuk.length(); i++)
    {
        n = int(masuk[i]) - 48;
        keluar += n;
    }

    cout << "Output = "<< keluar;
    return 0;
}