#include <iostream>
using namespace std;

int main() {
    char jenisKelamin;
    double tinggiBadan, beratBadan, beratBadanIdeal;

    cout << "Masukan Tinggi Badan Anda :";
    cin >> tinggiBadan;
    
    cout << "Masukan Berat Badan Anda :";
    cin >> beratBadan;
    
    cout << "Masukkan jenis kelamin (p/w) : ";
    cin >> jenisKelamin;

    cout << endl;
    
    cout<<"Tinggi badan Anda Adalah: "<<tinggiBadan<<" CM "<<endl;
    cout<<"Berat Badan Anda Adalah : "<<beratBadan<<" KG "<<endl;


    if (jenisKelamin == 'p' || jenisKelamin == 'P') {

        beratBadanIdeal = 0.9 * (tinggiBadan - 100);
        cout << "Berat badan ideal pria adalah: " << beratBadanIdeal << " Kg" << endl;
    } else if (jenisKelamin == 'w' || jenisKelamin == 'W') {

        beratBadanIdeal = 0.85 * (tinggiBadan - 100);
        cout << "Berat badan ideal wanita adalah: " << beratBadanIdeal << " Kg" << endl;
    } else {
        cout << "jenis kelamin tidak valid." << endl;
    }

}
