#include<iostream>
using namespace std;main(){
int a,t,k, total, u, saldo,e, kekurangan, tambah;
cout<<"Study Kasus"<<endl;

cout<<"============="<<endl;
cout<<"Masukkan Total: ";
cin>>t;    
cout<<"Masukkan Uang: ";
cin>>a; u=u+a;
cout<<"============="<<endl;

while(u<t){
cout<<"Total: "<<t<<endl;
cout<<"Saldo :"<<u<<endl;
cout<<"Kekurangan: "<<(k=t-u)<<endl;
cout<<"Masukkan Uang Kembali: ";
cin>>a; u=u+a;
}

system("cls");
cout<<"Selesai"<<endl;
cout<<"Total: "<<t<<endl;
cout<<"Saldo Uang: "<<u<<endl;
cout<<"Kembalian: "<<(e=u-t)<<endl;
}
