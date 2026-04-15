#include<iostream>

using namespace std;
main(){
	char object;
	
	cout<<"Masukan nilai: ";
	cin>>object;
	switch(object){
		case '1':cout<<"Statmen 1"<<endl;
		break;
		
		case '2': cout<<"Statmen 2"<<endl;
		default: cout<<"Default"<<endl;
	}
	cout<<"=============="<<endl;
	cout<<"FINISH"<<endl;
}
