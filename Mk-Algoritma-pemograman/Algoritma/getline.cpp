#include<cstdlib>
#include<iostream>
using namespace std;
typedef struct {
	char NIM[15];
	char Nama[30];
	int nilai;
	}mhs;
int main(int argc, char *argv[])
{
	mhs mahasiswa;
	//menginput dari kb
	cout<<"Masukann NIM :"; cin.getline(mahasiswa.NIM,15);
	cout<<"Masukan Nama :"; cin.getline(mahasiswa.Nama,30);
	cout<<"Masukan Nilai:"; cin>>mahasiswa.nilai;
	//mencetak hasil input
	cout<<"Mencetak Hasil Inputan"<<endl;
	cout<<"NIM :"<<mahasiswa.NIM<<endl;
	cout<<"Nama:"<<mahasiswa.Nama<<endl;
	cout<<"Nilai:"<<mahasiswa.nilai<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
	}
