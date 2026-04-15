#include<iostream>
using namespace std;
main (){
	char objek;
	int pilihan2, pilihan1;
	string username, p, nama="Belum ada nama ", nim, matkul, alamat, umur, kode, sks, dosen;
	switch(pilihan1)
{
    case 1:
        cout << "Pilih makanan: \n";
        cout << "1. Nasi goreng \n";
        cout << "2. Mie goreng \n";
        cout << "3. Soto ayam \n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan2;

        switch(pilihan2)
        {
            case 1:
                cout << "Anda memilih nasi goreng \n";
                break;
            case 2:
                cout << "Anda memilih mie goreng \n";
                break;
            case 3:
                cout << "Anda memilih soto ayam \n";
                break;
            default:
                cout << "Pilihan tidak valid \n";
        }
        break;
    case 2:
        cout << "Pilih minuman: \n";
        cout << "1. Es teh \n";
        cout << "2. Es jeruk \n";
        cout << "3. Kopi \n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan2;

        switch(pilihan2)
        {
            case 1:
                cout << "Anda memilih es teh \n";
                break;
            case 2:
                cout << "Anda memilih es jeruk \n";
                break;
            case 3:
                cout << "Anda memilih kopi \n";
                break;
            default:
                cout << "Pilihan tidak valid \n";
        }
        break;
    default:
        cout << "Pilihan tidak valid \n";
}
}
