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
		cout<<"Kamu p"<<endl;
		nama = "p";
		cout<<a+b;
	}else{
		cout<<"Kamu w"<<endl;
		nama = "w";
		proses =a-b;
	}
	cout<<"Cetak: "<<nama<<endl;
	cout<<"Cetak: "<<proses;
}
