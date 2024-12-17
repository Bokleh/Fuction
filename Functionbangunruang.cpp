#include <iostream>
#include <cmath>
using namespace std;

//   persegi
void persegi(int sisi) {
    int luas = sisi * sisi;
    int keliling = 4 * sisi;
    cout << " Luas persegi: " << luas << ", Keliling persegi: " << keliling << "\n" << endl;
}

//   persegi panjang
void persegiPanjang(int panjang, int lebar) {
    int luas = panjang * lebar;
    int keliling = 2 * (panjang + lebar);
    cout << "Luas persegi panjang: " << luas << ", Keliling persegi panjang: " << keliling << "\n" << endl;
}

// segitiga siku-siku
void segitigaSikuSiku(double alas, double tinggi) {
    double luas = 0.5 * alas * tinggi;
    double keliling = alas + tinggi + sqrt(alas * alas + tinggi * tinggi);
    cout << "Luas Segitiga Siku-Siku: " << luas << ", Keliling Segitiga Siku-Siku: " << keliling << "\n" << endl;
}

// lingkaran
void lingkaran(double jariJari) {
    const double PHI = 3.14;
    double luas = PHI * jariJari * jariJari;
    double keliling = 2 * PHI * jariJari;
    cout << "Luas Lingkaran: " << luas << ", Keliling Lingkaran: " << keliling << "\n" << endl;
}

int main() {
    double sisi, panjang, lebar, alas, tinggi, jariJari;

    // input dan output persegi
    cout << "Masukkan sisi persegi: ";
    cin >> sisi;
    persegi(sisi);

    // input dan output persegi panjang
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    persegiPanjang(panjang, lebar);

    // input dan output segitiga siku-siku
    cout << "Masukkan alas segitiga siku-siku: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga siku-siku : ";
    cin >> tinggi;
    segitigaSikuSiku(alas, tinggi);

    // input dan output lingkaran
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
    lingkaran(jariJari);

    return 0;
}