#include <iostream>
using namespace std;

//function -> ada nilai
int tambah(int a, int b) {
    return a + b;
}

//function tidak ada nilai
void sayHello() {
    cout << "Hello, World!" << endl;
}

void bakso() {
    cout << "   ____" << endl;
    cout << "  /    \\ " << endl;
    cout << " |      |" << endl;
    cout << " \\      /" << endl;
    cout << "  \\____/" << endl;
}
int main() {
    system("cls");
    cout << tambah(1203, -3) << endl;
    sayHello();
    bakso();
    return 0;
}