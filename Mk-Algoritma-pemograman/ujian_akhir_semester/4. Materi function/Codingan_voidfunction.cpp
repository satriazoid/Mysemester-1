#include<iostream>

using namespace std;

int a, b, c, d;

void nilai_a() {
    cout << "Nilai A adalah Sangat bagus" << endl;
}

void nilai_b() {
    cout << "Nilai B adalah Bagus" << endl;
}

void nilai_c() {
    cout << "Nilai C Perbaiki" << endl;
}

void nilai_d() {
    cout << "Nilai D Perbaiki" << endl;
}

int main() {
    cout << "Input nilai a: ";
    cin >> a;

    cout << "Input nilai b: ";
    cin >> b;

    cout << "Input nilai c: ";
    cin >> c;

    cout << "Input nilai d: ";
    cin >> d;

    try {
        if (a >= 80) {
            nilai_a();
        }

        if (b >= 70) {
            nilai_b();
        }

        if (c >= 60) {
            nilai_c();
        }

        if (d >= 55) {
            nilai_d();
        }
        
    } catch (int) {
        cout << "Input salah" << endl;
    }

    return 0;
}

