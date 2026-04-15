#include<iostream>

using namespace std;
main(){
	char object;
	int password, pil;
	string username, k, nama="belum ada Nama", nim, sks, pelajaran, nama_dosen, nim_dosen;

	cout<<"masukan Username: ";
	cin>>username;

	if(username=="admin") {
	cout<<"Masukan Password: ";
	cin>>password;
	switch(password){
		case 12345:
            k="Berhasil login";
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
			cout<<"Nim :"<<nim<<endl;
			cout<<"Nama :"<<nama<<endl;
			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;
			
			switch(pil){
			case 1:
			cout<<"Masukan NIM: ";
			cin>>nim;
			cout<<"Masukan Nama: ";
			cin>>nama;

			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;
			cout<<"Nim :"<<nim<<endl;
			cout<<"Nama :"<<nama<<endl;
			cout<<endl;
			cout<<"============"<<endl;
			cout<<endl;
				}
			}
			

    cout<<"Pengguna :"<<username<<endl;
	cout<<"Keterangan :"<<k<<endl;
	cout<<endl;
	cout<<"============="<<endl;
		}
	}
}
