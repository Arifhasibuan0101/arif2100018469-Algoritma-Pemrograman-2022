#include<cstdlib>
#include<iostream>
 #include <conio.h>
 #include<math.h>
 
using namespace std;
 
class jarak{
 public:
 void dua_titik();
 float jarak_2titik();
 private:
 int  x1,x2,y1,y2,a,b;
 float jarak; 
};
 
void jarak::dua_titik(){
 cout<<"menghitung jarak antara dua titik"<<endl;
 cout<<"masukkan x1 : ";
 cin>>x1;
 cout<<"masukkan y1 : ";
 cin>>y1;
 cout<<"masukkan x2 : ";
 cin>>x2;
 cout<<"masukkan y2 : ";
 cin>>y2; 
}
 
float jarak::jarak_2titik(){ 
jarak=(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
cout<<"jadi jaraknya adalah: "<<jarak; 
}
 
int main(int argc, char *argv[])
{
jarak X; 
X.dua_titik(); 
X.jarak_2titik(); 
getch(); 
return 0; 
}