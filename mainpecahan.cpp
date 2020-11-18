#include <iostream>
#include "Pecahan.h"

using namespace std;

int main() {
    Pecahan angka_1 = Pecahan(3, 2);
    Pecahan angka_2 = Pecahan(5, 6);

    Pecahan hasil = angka_1.tambah(angka_2);
    cout << "Pecahan " << angka_1.getPembilang() << "/" << angka_1.getPenyebut() << " + Pecahan " << angka_2.getPembilang() << "/" << angka_2.getPenyebut() << " = " << hasil.getPembilang() << "/" << hasil.getPenyebut() << "\n\n";
    system("pause");
    return 0;
}