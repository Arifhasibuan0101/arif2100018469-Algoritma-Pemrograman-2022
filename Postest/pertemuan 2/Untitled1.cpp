#include <iostream>

using namespace std;
int main(){
	int a;
	cout<<"=================================================="<<endl;
	cout<<"\tPROGRAM MENENTUKAN TAHUN KABISAT     |"<<endl;
	cout<<"=================================================="<<endl;
	cout<<"\tMasukkan Tahun \t = ";
	cin>>a;
	
	if(a%4==0){
		cout<<"\t"<<a<<" "<<"Merupakan Tahun Kabisat";
	}else if(a%100==0){
		cout<<"\t"<<a<<" "<<"Merupakan Tahun Kabisat";
	}else if(a%400==0){
		cout<<"\t"<<a<<" "<<"Merupakan Tahun Kabisat";
	}
	else{
		cout<<"\t"<<a<<" "<<"Bukan Tahun Kabisat";
	}
}