#include<iostream>
using namespace std;

string nama_karyawan, Keterangan,Jobdesk, Leader, bulan, gelar;
int No_karyawan, tanggal, tahun;

void data(){
	cout<<" Masukan Nama Karyawan       : ";
	cin>>nama_karyawan;
	cout<<" NISN Siswa                  : ";
	cin>>No_karyawan;
	cout<<" Pekerjaan                   : ";
	cin>>Jobdesk;
	cout<<" Keterangan                  : ";
	cin>>Keterangan;
	cout<<" Team Leader                 : ";
	cin>>Leader;
	cout<<" Tanggal                     : ";
	cin>>tanggal;
	cout<<" Bulan                       : ";
	cin>>bulan;
	cout<<" Tahun                       : ";
	cin>>tahun;
}

int nilai;
void ni(){
	cout<<" Nilai Terakhir Mata Pelajran Remedial : ";
	cin>>nilai;
}

void surat(){
	cout<<" SURAT PERMOHONAN REMDIAL MATA PELAJARAN "<<endl;
	cout<<"  "<<endl;
	cout<<" Nama Karyawan : "<<nama_karyawan<<endl;;
	cout<<" No Karyawan   : "<<No_karyawan<<endl;;
	cout<<" Jobdesk       : "<<Jobdesk<<endl;
	cout<<"  "<<endl;
	cout<<" Saya Siswa Tahun Akademik 2023/2024 MIS YABIKA."<<endl;
	cout<<" Mengajukan Permohonan Kepada Bapak/Ibu agar berkenan untuk"<<endl;
	cout<<" memberikan izin Remedial pada Mata Pelajaran "<<Keterangan<<" Kelas "<<Jobdesk<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"                                                                    Jambe, "<<tanggal<<" "<<bulan<<" "<<tahun<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"                                                                           "<<Leader<<", "<<endl;
}
int pilihan;
void pilih(){
		cout<<" Pilihan Siswa "<<endl;
	cout<<" 1. Permohonan Remedial Mapel "<<endl;
	cout<<" 2. Kembali "<<endl;
	cout<<" Silahkan Pilih : ";
	cin>>pilihan;
}
main(){

	cout<<"* WELCOME TO MIS YABIKA *"<<endl;
	cout<<"  "<<endl;

	cout<<"  "<<endl;
	pilih();

	if(pilihan==1){
		cout<<"  "<<endl;
		cout<<" !! Mari Isi Data !! "<<endl;
		cout<<"  "<<endl;

		data();
		cout<<"  "<<endl;
		ni();
		cout<<"  "<<endl;
		surat();
	}else{
		cout<<" Diluar Pilihan Yang di atas."<<endl;
	}

	if(pilihan==2){

	pilih();


	}
}
