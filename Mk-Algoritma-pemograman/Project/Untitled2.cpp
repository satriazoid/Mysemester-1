#include <iostream>
#include <string>

// Fakta awal
bool smokeDetected = false;
bool heatDetected = false;

// Aturan
void forwardChaining() {
    if (smokeDetected) {
        std::cout << "Peringatan Kebakaran: Deteksi Asap! Panggil 911." << std::endl;
    } else if (heatDetected) {
        std::cout << "Peringatan Kebakaran: Deteksi Panas! Panggil 911." << std::endl;
    } else {
        std::cout << "Tidak ada bahaya kebakaran yang terdeteksi." << std::endl;
    }
}

int main() {
    // Simulasikan deteksi asap atau panas
    smokeDetected = true; // Ganti dengan false untuk menguji deteksi panas

    // Jalankan forward chaining
    forwardChaining();

    return 0;
}
