#include <iostream>
using namespace std;

int main() {
  // membuat array tiga dimensi bernama suhu dengan ukuran 2 x 3 x 4
  int suhu[2][3][4];

  // mengisi nilai suhu secara acak
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
      }
    }
  }

  // menampilkan nilai suhu
  cout << "Nilai suhu di berbagai titik:" << endl;
  cout << "=============================" << endl;
  
  for (int i = 0; i < 2; i++) {
    cout << "Lapisan ke-" << i + 1 << ":" << endl;
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
        cout << "Titik (" << i << ", " << j << ", " << k << ") = ";
        cout << suhu[i][j][k] << " derajat" << endl;
      }
    }
    cout << endl;
  }

  return 0;
}


