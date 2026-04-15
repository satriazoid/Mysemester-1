#include<iostream>
using namespace std;

string nama, mp, guru, bulan, gelar;
int nisn, kelas, tanggal, tahun;

void data(){
	cout<<" Masukan Nama Siswa      : ";
	cin>>nama;
	cout<<" NISN Siswa              : ";
	cin>>nisn;
	cout<<" Kelas                   : ";
	cin>>kelas;
	cout<<" Mata Pelajaran Remedial : ";
	cin>>mp;
	cout<<" Guru yang Mengajar      : ";
	cin>>guru;
	cout<<" Gelar Guru yang Mengajar: ";
	cin>>gelar;
	cout<<" Tanggal                 : ";
	cin>>tanggal;
	cout<<" Bulan                   : ";
	cin>>bulan;
	cout<<" Tahun                   : ";
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
	cout<<" Nama Siswa : "<<nama<<endl;;
	cout<<" NISN       : "<<nisn<<endl;;
	cout<<" Kelas      : "<<kelas<<endl;
	cout<<"  "<<endl;
	cout<<" Saya Siswa Tahun Akademik 2023/2024 MIS YABIKA."<<endl;
	cout<<" Mengajukan Permohonan Kepada Bapak/Ibu agar berkenan untuk"<<endl;
	cout<<" memberikan izin Remedial pada Mata Pelajaran "<<mp<<" Kelas "<<kelas<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"                                                                    Jambe, "<<tanggal<<" "<<bulan<<" "<<tahun<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"                                                                           "<<guru<<", "<<gelar<<endl;
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
