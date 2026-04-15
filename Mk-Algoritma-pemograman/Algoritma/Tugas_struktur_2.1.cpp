#include <iostream>
using namespace std;

int main() {
    char jenisKelamin;
    double tinggiBadan, beratBadan, beratBadanIdeal;

// Minta input dari pengguna untuk berat badan dan tinggi badan dalam kilogram dan meter
cout << "Masukkan berat badan Anda dalam kg: ";
cin >> beratBadan;
cout << "Masukkan tinggi badan Anda dalam m: ";
cin >> tinggiBadan;

// Hitung berat badan ideal dengan rumus BMI = berat / (tinggi * tinggi)
{
	beratBadanIdeal = beratBadan / (tinggiBadan * beratBadan);
}

// Tampilkan hasil perhitungan ke layar
cout << "Berat badan ideal Anda adalah: " << ideal << " kg" << endl;

// Cek apakah pengguna memiliki berat badan normal, kurang, lebih atau obesitas
if (ideal < 18.5)
{
    cout << "Anda kurang berat badan." << endl;
}
else if (ideal >= 18.5 && ideal < 25)
{
    cout << "Anda memiliki berat badan normal." << endl;
}
else if (ideal >= 25 && ideal < 30)
{
    cout << "Anda kelebihan berat badan." << endl;
}
else
{
    cout << "Anda mengalami obesitas." << endl;
}

return 0;
}
