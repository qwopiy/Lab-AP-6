#include <iostream>
using namespace std;

int main() {
    int baris;
    int n = 1;
    cout << "Input Jumlah Baris = "; cin >> baris;

    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n << " ";
            n+=1;
        }
        cout << endl;
    }
    return 0;
}