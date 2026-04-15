#include<iostream>
using namespace std;
main() {
	int pilihan;
	cout<<"1. Ayam Goreng"<<endl;
	cout<<"2. Ayam Bakar"<<endl;
	cout<<"3. Seblak"<<endl;
	cout<<"4. Bakso"<<endl;
	cout<<"5. Mie Ayam"<<endl;
	cout<<"Kamu mau pesan apa? ";
	cin>>pilihan;
	
if(pilihan==1)
{
	cout<<"Kamu Makan Ayam goreng"<<endl;
}else if(pilihan==2)
{
	cout<<"Kamu Makan Ayam bakar"<<endl;
}else if(pilihan==3)
{
	cout<<"Kamu Makan Seblak"<<endl;
}else if(pilihan==4)
{
	cout<<"Kamu Makan Bakso"<<endl;
}else if(pilihan==5)
{
	cout<<"Kamu Makan Mie ayam"<<endl;
}else{
	cout<<"Kamu tidak memesan"<<endl;
}
cout<<"===Selamat Menikmati==="<<endl;
}
