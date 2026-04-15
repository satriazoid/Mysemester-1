#include<iostream>

using namespace std;

int a;

void nilai_a() {
	cout<<"Input nilai a :";
	cin>>a; try{
		if(a==1){
			nilai_a();
		}
		if(a>=0){
			cout<<"nilai 0 dan positif";
			a=a*100;
		}else{
			cout<<"nilai di bawah 0";
		}
	}catch(int a){
	cout<<"input salah";	
	}
		}
		
	main(){
		nilai_a();
	}
