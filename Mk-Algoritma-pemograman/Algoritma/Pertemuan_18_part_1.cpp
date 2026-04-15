#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi panjang
int luas_persegi_panjang(int panjang, int lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung luas lingkaran
double luas_lingkaran(int radius) {
    return 3.14 * radius * radius;
}

// Fungsi untuk menghitung luas segitiga
double luas_segitiga(int alas, int tinggi) {
    return 0.5 * alas * tinggi;
}

int main() {
    // Deklarasi variabel
    int pilihan, p, l, r, a, t;
    double luas;

    // Perulangan untuk menampilkan menu pilihan
    do {
        cout << "Pilih salah satu dari menu berikut:\n";
        cout << "1. Hitung luas persegi panjang\n";
        cout << "2. Hitung luas lingkaran\n";
        cout << "3. Hitung luas segitiga\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        // Try catch untuk menangani input yang tidak valid
        try {
            if (pilihan < 1 || pilihan > 4) {
                throw pilihan;
            }
        }
        catch (int pilihan) {
            cout << "Pilihan Anda tidak valid. Silakan coba lagi.\n";
            continue;
        }

        // Switch case untuk memanggil fungsi sesuai pilihan
        switch (pilihan) {
            case 1:
                cout << "Masukkan panjang dan lebar persegi panjang: ";
                cin >> p >> l;
                luas = luas_persegi_panjang(p, l);
                cout << "Luas persegi panjang adalah " << luas << "\n";
                break;
            case 2:
                cout << "Masukkan radius lingkaran: ";
                cin >> r;
                luas = luas_lingkaran(r);
                cout << "Luas lingkaran adalah " << luas << "\n";
                break;
            case 3:
                cout << "Masukkan alas dan tinggi segitiga: ";
                cin >> a >> t;
                luas = luas_segitiga(a, t);
                cout << "Luas segitiga adalah " << luas << "\n";
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program ini.\n";
                break;
        }
    } while (pilihan != 4);

    return 0;
}

