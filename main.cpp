#include <iostream>
#include <ostream>
#include <ios>
#include <stdio.h>
#define stg 0.5

using namespace std;

int main(int argc, char** argv) {
int pilih,s;
pilih=0;
cout<<"Program perhitungan luas\n";
cout<<"Silakan pilih menu berikut ini : \n";
cout<<"1. Menghitung Luas Segi Empat\n";
cout<<"2. Menghitung Luas Segitiga\n";
cout<<"3. Menghitung Luas Bujur Sangkar\n";
cout<<"Pilihan Anda = ";
cin>>pilih;
switch(pilih)
{
case 1 :
		 cout<<"Luas Segi Empat = Sisi X Sisi\n";
		 cout<<"#############################\n";
		 int si,sis;
		 float hasil;
		 cout<<"Masukan Sisi Pertama : ";
		 cin>>si;
		 cout<<"Masukan Sisi Kedua   : ";
		 cin>>sis;
		 hasil= si * sis;
         cout<<"Luas Segi Empat : "<<hasil<<endl<<endl;break;
case 2 :
		 cout<<"Luas Segitiga = 0,5 X Alas X Tinggi\n";
		 cout<<"#############################\n";
		 float als,tng;		 
		 float jwb;		 
		 cout<<"Masukan Alas   : ";
		 cin>>als;
		 cout<<"Masukan Tinggi : ";
		 cin>>tng;
		 jwb = 0.5*als*tng;
		 cout<<"Luas Segitiga : "<<jwb<<endl<<endl;break;
case 3 : 
		 cout<<"Luas Bujur Sangkar\n";
		 int s, ls, kl;
		 cout<<"Masukan sisi : ";
		 cin>>s;
		 kl = s*s*s*s;
		 kl = 4*s;
		 ls = s*s;
		 ls = ls^2;
		 cout<<"Luas bujur snagkar memiliki :\n";
		 cout<<"1. 4 simetri putar\n";
		 cout<<"2. 4 simetri lipat\n";
		 cout<<"3. 2 diagonal\n\n";
		 cout<<"Luas Bujur Sangkar : "<<ls<<endl;break;
		 
		 default:
         cout<<"Pilihan 1-3 Saja\n";
		 
}
}
