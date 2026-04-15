#include<iostream>
using namespace std;
main() {
	int proses=0,a=1,b=2;
	char pilih;
	string nama;
	cout<<"Selamat datang"<<endl;
	cout<<"pilih (p/w): ";
	cin>>pilih;
	if(pilih=='p'){
		cout<<"Kamu pria"<<endl;
		nama = "Tampan";
		proses =a+b;
	}else{
		cout<<"Kamu wanita"<<endl;
		nama = "Cantik";
		proses =a-b;
	}
	cout<<"Cetak: "<<nama<<endl;
	cout<<"Cetak: "<<proses;
}
