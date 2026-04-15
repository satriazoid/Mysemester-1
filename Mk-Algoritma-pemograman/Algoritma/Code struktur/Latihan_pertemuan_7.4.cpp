#include<iostream>
using namespace std;
int main(){
	string loop;
	cout<<"selamat datang"<<endl;
	do{
		for(int a=1;a<=10;a++){
		cout<<"nilai: "<<a<<endl;
		}
		cout<<"apakah anda ingin mengulang Statmen di atas (y/n): ";
		cin>>loop;
}while (loop=="y");

cout << " Finish "<<endl;
}
