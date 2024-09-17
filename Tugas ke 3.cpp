#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float panjang, lebar, sisi, alas, tinggi, luas;

    // Menampilkan menu pilihan
    cout << "Pilih bentuk yang ingin dihitung luasnya:\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            // Menghitung luas persegi
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas Persegi = " << luas << endl;
            break;

        case 2:
            // Menghitung luas persegi panjang
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas Persegi Panjang = " << luas << endl;
            break;

        case 3:
            // Menghitung luas segitiga
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas Segitiga = " << luas << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
