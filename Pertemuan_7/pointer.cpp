#include <iostream>
using namespace std;

// void penjumlahan(int a, int b) {
//     *a += *b;
//     cout << *a << end;
// }

int main() {
    system("cls");

    // int number = 16;
    // int *ptrnumber = &number;
    // int **ptrptrnumber = &ptrnumber;
    // int ***ptrptrptrnumber = &ptrptrnumber;
    // int ****ptrptrptrptrnumber = &ptrptrptrnumber;
    // int *****ptrptrptrptrptrnumber = &ptrptrptrptrnumber;
    // int ******ptrptrptrptrptrptrnumber = &ptrptrptrptrptrnumber;

    // cout << number << endl;         // Isi data
    // cout << &number << endl;        // Alamat
    // cout << ptrnumber << endl;      // isi variabel ptrnumber
    // cout << *ptrnumber << endl;     // isi variabel yg ditunjukkan ptrnumber
    // cout << **ptrptrnumber << " " << &ptrptrnumber << endl;
    // cout << ***ptrptrptrnumber << " " << &ptrptrptrnumber << endl;

    // *ptrnumber = 1;
    // cout << number << endl;         
    // cout << &number << endl;        
    // cout << ptrnumber << endl;      
    // cout << *ptrnumber << endl;
    // cout << &ptrnumber << endl;

    // int num[] = {1, 2, 3, 4, 5};
    // cout << num << endl;
    // cout << &num[0] << endl;

    // int a = 2;
    // int b = 3;

    // cout << penjumlahan(&a, &b) << endl;
    // cout << a << endl;

    int* ptr = new int;
    *ptr = 24;
    cout << ptr << endl;
    cout << *ptr << endl;
    delete ptr;
    cout << ptr << endl;
    cout << *ptr << endl;
}