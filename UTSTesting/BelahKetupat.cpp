#include <iostream>
using namespace std;

main() {
    int row;
    cin >> row;


    for (int i = 1; i <= (row + 1) / 2; i++)
    {
        for (int k = row-i; k >= 1; k--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = (row/2); i >= 1; i--)
    {
        for (int k = row-i; k >= 1; k--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}