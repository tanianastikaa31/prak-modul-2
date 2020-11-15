#include "Pecahan.h"

Pecahan::Pecahan(int pembilang, int penyebut) {
    this->pembilang = pembilang;
    this->penyebut = penyebut;
}

int Pecahan::getPembilang() {
    return this->pembilang;
}

int Pecahan::getPenyebut() {
    return this->penyebut;
}

Pecahan Pecahan::tambah(Pecahan angka_2) {
    int newPenyebut = angka_2.getPenyebut() * this->penyebut;
    int pembilang_1 = (newPenyebut / this->penyebut) * this->pembilang;
    int pembilang_2 = (newPenyebut / angka_2.getPenyebut()) * angka_2.getPembilang();
    int newPembilang = pembilang_1 + pembilang_2;
    Pecahan hasil = Pecahan(newPembilang, newPenyebut);
    return hasil;
}
