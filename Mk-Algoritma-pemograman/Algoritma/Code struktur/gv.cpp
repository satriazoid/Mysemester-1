#include <iostream>
using namespace std;
main() {
int total, saldo, uang, kurang, kembali;
//while
	cout<<"MASUKKAN TOTAL : ";
	cin>>total;
	cout<<"MASUKKAN UANG : ";
	cin>>uang;
	while(uang<total){
		cout<<"TOTAL : "<<total<<endl;
		cout<<"UANG :"<<uang<<endl;
		cout<<"SISTEM AKAN MEMINTA UANG KEMBALI JIKA UANG KURANG"<<endl;
		cout<<"UANG YANG KURANG : "<<(kurang=total-uang)<<endl;
		cout<<"MASUKKAN UANG KEMBALI : ";
		cin>>saldo;
		uang=uang+saldo;
	}
system("cls");
cout << "SELESAI...." <<endl;
cout << "TOTAL: " << total <<endl;
cout << "SALDO UANG: " << uang <<endl;
cout << "KEMBALIAN: " << (kembali=uang-total) <<endl;
}
