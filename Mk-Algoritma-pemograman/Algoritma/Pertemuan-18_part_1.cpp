#include<iostream>
using namespace std;

string nama_karyawan, Keterangan, Jobdesk, Leader, bulan, gelar;
int No_karyawan, tanggal, tahun;

void data(){
	cout<<" Masukan Nama Karyawan   : ";
	cin>>nama_karyawan;

	cout<<" No Karyawan             : ";
	cin>>No_karyawan;

	cout<<" Jobdesk                 : ";
	cin>>Jobdesk;

	cout<<" Keterangan              : ";
	cin>>Keterangan;

	cout<<" Team leader             : ";
	cin>>Leader;

    cout<<" Gelar Leader            : ";
	cin>>gelar;

	cout<<" Tanggal                 : ";
	cin>>tanggal;

	cout<<" Bulan                   : ";
	cin>>bulan;

	cout<<" Tahun                   : ";
	cin>>tahun;
}

int input_kembali;
void ikj(){
	cout<<" Input kembali ijin : ";
	cin>>input_kembali;
}

void surat(){
	cout<<" SURAT PERMOHONAN IJIN CUTI SEMENTARA "<<endl;
	cout<<"  "<<endl;

	cout<<" Nama Karyawan           : "<<nama_karyawan<<endl;

	cout<<" No karyawan             : "<<No_karyawan<<endl;

	cout<<" Jobdesk                 : "<<Jobdesk<<endl;

	cout<<"  "<<endl;
	cout<<" Saya Karyawan Tahun 2023/2024 PT.HANURA BANGSA BANGSA"<<endl;
	cout<<" Mengajukan Permohonan Kepada Bapak/Ibu agar berkenan untuk"<<endl;
	cout<<" memberikan izin "<<Keterangan<<" Nama "<<Leader<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"                                                                    Jakarta, "<<tanggal<<" "<<bulan<<" "<<tahun<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
    cout<<"  "<<endl;
	cout<<"                                                                         "<<Leader<<gelar<<endl;
}
int pilihan;
void pilih(){
    cout<<" Pilihan Pekerja "<<endl;
	cout<<" 1. Permohonan Cuti Karyawan "<<endl;
	cout<<" 2. Kembali "<<endl;
	cout<<" Silahkan Pilih : ";
	cin>>pilihan;
	system ("CLS");
}
main(){

	cout<<"* WELCOME TO PT.HANURA BANGSA BANGSA *"<<endl;
	cout<<"  "<<endl;

	cout<<"  "<<endl;
	pilih();

	if(pilihan==1){
		cout<<"  "<<endl;
		cout<<" !! Mari Isi Data !! "<<endl;
		cout<<"  "<<endl;

		data();
		cout<<"  "<<endl;
		ikj();
		cout<<"  "<<endl;
		surat();
	}else{
		cout<<" Diluar Pilihan Yang di atas."<<endl;
	}

	if(pilihan==2){

	pilih();


	}
}
