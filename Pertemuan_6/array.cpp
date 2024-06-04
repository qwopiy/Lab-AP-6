#include <iostream>
using namespace std;

int main() {
    system("cls");

    // deklarasi array
    string nama[7] = {"b", "i", "n", "t", "a", "n", "g" };

    // nama[0] = b;
    // nama[1] = i;
    // nama[2] = n;
    // nama[3] = t;
    // nama[4] = a;

    for (int i = 0; i < 7; i++)
    {
        cout << nama[i] << endl;
    }
    
    // array matriks
    int matrik[2][2] = {{1, 2}, {3, 4}};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrik[i][j] << " ";
        }
        cout << endl;
    }
    
}