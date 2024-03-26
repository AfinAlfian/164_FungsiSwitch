#include <iostream>
using namespace std;

int luas;

void prosedureLuas(int p, int l) {
    luas = p * l;
}

int fungsiLuas(int p, int l) {
    return p * l;
}

int main()
{
    int panjang, lebar;
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;

    prosedureLuas(panjang, lebar);
    cout << "luas persegi panjang dengan prosedur : " << luas << endl;
    cout << "luas persegi panjang dengan fungsi : " << fungsiLuas(panjang, lebar) << endl;
}

