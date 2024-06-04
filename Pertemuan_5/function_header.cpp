#include <iostream>
#include "operasi.h"
#include "preprocessor.h"
uns;

//function tidak ada nilai
void sayHello() {
    o << "Hello, World!" << n;
}

void bakso() {
    o << "   ____" << n;
    o << "  /    \\ " << n;
    o << " |      |" << n;
    o << " \\      /" << n;
    o << "  \\____/" << n;
}

int main() {
    system("cls");
    o << tambah(1203, -4) << n;
    o << kurang(1203, -4) << n;
    o << kali(1203, -4) << n;
    o << bagi(1203, -4) << n;
    sayHello();
    bakso();
    system("pause");
    return 0;
}