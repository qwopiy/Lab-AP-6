#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("cls");

    // Vector declare
    vector<string> nama = {"a", "b", "c", "d", "e"};

    // Access Vector
    // for (int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }

    // for each loop
    for(string n : nama) {
        cout << n << endl;
    }

    // Adding Elements
    // nama.push_back("f");
    // for (int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }

    // Deleting Elemenets
    // nama.pop_back();
    // nama.erase(nama.begin() + 1);
    // for (int i = 0; i < nama.size(); i++) {
    //     cout << nama[i] << endl;
    // }
}