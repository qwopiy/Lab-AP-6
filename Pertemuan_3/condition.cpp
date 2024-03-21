#include <iostream>
using namespace std;

main() {
    int a;
    cout << "Masukkan nilai = "; cin>> a;
    
    // //if Statement
    // if (a < 65) {
    //     cout << "tidak lulus" << endl;
    // }
    
    //if-else Statement
    // if (a < 65) {
    //     cout << "tidak lulus" << endl;
    // } else {
    //     cout << "lulus" << endl;
    // }

    //if-else-if Statement
    // if (a < 65) {
    //     cout << "tidak lulus" << endl;
    // } else if (a > 65) {
    //     cout << "lulus" << endl;
    // } else {
    //     cout << "nilai pas-pasan" << endl
    // }
    
    // //switch-case
    // switch (a)
    // {
    // case 90 ... 100:
    //     cout << "A";
    //     break;
    
    // case 80 ... 89;
    //     cout << "B";
    //     break;

    // case 70 ... 79;
    //     cout << "C";
    //     break;

    // case 60 ... 69;
    //     cout << "D";
    //     break;

    // case 0 ... 59;
    //     cout << "E";
    //     break;

    // default:
    //     cout << "tidak Valid" << endl;
    //     break;
    // }

    //Ternary operator
    if (a < 0) {
        cout << "Negatif" << endl;
    } else {
        cout << "Positif" << endl;
    }

    string tipe = (a > 0) ? "Positif" : "Negatif";
    cout << tipe << endl;
}