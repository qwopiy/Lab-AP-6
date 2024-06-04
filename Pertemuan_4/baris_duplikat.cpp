#include <iostream>
using namespace std;

int main() {
    int jumlah, n, suku = 0;

    cout << "batas = "; cin >> n;

    for(int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            suku += 5;
        }
        jumlah +=suku;
        cout << suku << " ";
    }

    cout << "\n";
    cout << jumlah << " dan " << suku;
}