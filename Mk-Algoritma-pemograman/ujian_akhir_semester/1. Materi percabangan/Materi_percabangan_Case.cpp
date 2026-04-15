#include<iostream>

using namespace std;
main(){
	char object;
	int password, pil;
	string username, keterangan, nama="belum ada Nama", nim, sks, pelajaran, nama_dosen, nim_dosen;

	cout<<"masukan Username: ";
	cin>>username;

	if(username=="admin") {
	cout<<"Masukan Password: ";
	cin>>password;
	switch(password){
		case 12:
			keterangan="Berhasil login";
			cout<<"Halaman admin"<<endl;
			cout<<"1. Input data Mahasiswa"<<endl;
			cout<<"2. Input data Matakuliah"<<endl;
			cout<<"3. Input data Dosen"<<endl;

			cout<<"Masukan pilihan: ";
			cin>>pil;

			switch(pil){
		case 1:
			cout<<"Masukan NIM: ";
			cin>>nim;
			cout<<"Masukan Nama: "; 
			cin>>nama;

			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;
			cout<<"Nim: "<<nim<<endl;
			cout<<"Nama: "<<nama<<endl;
			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;

			}

		switch(pil){
		case 2:
			cout<<"Masukan Sks: ";
			cin>>sks;
			cout<<"Masukan Pelajaran: ";
			cin>>pelajaran;

			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;

			cout<<"Sks: "<<sks<<endl;
			cout<<"Pelajaran: "<<pelajaran<<endl;
			cout<<endl;

			cout<<"============"<<endl;
			cout<<endl;

			}

			switch(pil){
		case 3:
			cout<<"Masukan Nama: ";
			cin>>nama_dosen;
			cout<<"Nim Dosen: ";
			cin>>nim_dosen;

			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;

			cout<<"Nama Dosen: "<<nama_dosen<<endl;
			cout<<"Nomor Dosen: "<<nim_dosen<<endl;
			cout<<endl;

			cout<<"============"<<endl;
			cout<<endl;
			}
			break;
		default : keterangan="Gagal login";
	}

	}


	if(username=="user") {
	cout<<"Masukan Password: ";
	cin>>password;
	switch(password){
		case 13:
			keterangan="Berhasil login";
			cout<<"Halaman user"<<endl;
			cout<<"1. Input data Mahasiswa"<<endl;
			cout<<"2. Input data Matakuliah"<<endl;

			cout<<"Masukan pilihan: ";
			cin>>pil;

			switch(pil){
		case 1:
			cout<<"Masukan NIM: ";
			cin>>nim;
			cout<<"Masukan Nama: ";
			cin>>nama;

			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;

			cout<<"NIM: "<<nim<<endl;
			cout<<"Nama: "<<nama<<endl;
			cout<<endl;

			cout<<"============"<<endl;
			cout<<endl;

			}

		switch(pil){
		case 2:
			cout<<"Masukan Sks: ";
			cin>>sks;
			cout<<"Masukan pelajaran: ";
			cin>>pelajaran;

			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;

			cout<<"Nama Dosen: "<<nama_dosen<<endl;
			cout<<"Nomor Dosen: "<<nim_dosen<<endl;
			cout<<endl;

			cout<<"============"<<endl;
			cout<<endl;

			}
			break;
		default : keterangan="Gagal login";
	}

	}
    cout<<"Pengguna   : "<<username<<endl;
	cout<<"Keterangan : "<<keterangan<<endl;
	cout<<endl;
	cout<<"============="<<endl;
}
