#include<iostream>
using namespace std;
main (){
	char objek;
	int password, pil1, pil2;
	string username, p, nama="Belum ada nama ", nim, matkul, alamat, umur, kode, sks, dosen;
	
	cout<<"masukan username: ";
	cin>>username;
	
	if(username=="a"){
		cout<<"Masukan password: ";
		cin>>password;
		switch(password){
			case 1:
				p="Password Benar";
				cout<<"Halaman admin"<<endl;
				cout<<"1. Input data Mahasiswa"<<endl;
				cout<<"2. Input data Matakuliah"<<endl;
				cout<<"3. Input data dosen"<<endl;
				
				cout<<"Masukan pilihan: ";
				cin>>pil1;
				
				switch(pil1){
					case 1:
						cout<<"Masukan Nama: ";
						cin>>nama;
						cout<<"Masukan Nim: ";
						cin>>nim;
						
						switch(pil2){
						cout<<"Halaman pilihan"<<endl;
						cout<<"1. Input data alamat"<<endl;
						cout<<"2. Input data "<<endl;
						cout<<"3. Input data dosen"<<endl;
				
						cout<<"Masukan pilihan: ";
						cin>>pil2;
				
						case 1:
						cout<<"Masukan alamat: ";
						cin>>alamat;
						cout<<"Masukan umur: ";
						cin>>umur;
						cout<<"=============="<<endl;
						cout<<"Nama: "<<nama<<endl;
						cout<<"Nim: "<<nim<<endl;
						cout<<"Alamat: "<<alamat<<endl;
						cout<<"Umur: "<<umur<<endl;
						break;
						
						case 2:
						cout<<"Masukan Nama: ";
						cin>>nama;
						cout<<"Masukan Nim: ";
						cin>>nim;
						cout<<"=============="<<endl;
						cout<<"Nama: "<<nama<<endl;
						cout<<"NIM: "<<nim<<endl;
						break;
						
						case 3:
						cout<<"Masukan Nama: ";
						cin>>nama;
						cout<<"Masukan Nim: ";
						cin>>nim;
						cout<<"=============="<<endl;
						cout<<"Nama: "<<nama<<endl;
						cout<<"NIM: "<<nim<<endl;
						break;
						}
					
				}
				break;
				default : p="Password Salah!";
}
}
}
