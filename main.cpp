#include <iostream>
#include <ostream>
#include <ios>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
char cPilihan; 
string szNama;
do
{
cout<<"Masukan Nama Anda : ";
cin>>szNama;
cout<<"Nama Anda adalah "<<szNama<<endl<<endl
	<<"Mau mengulang lagi (y/n)? ";
	cin>>cPilihan;
} while (cPilihan == 'y' || cPilihan == 'Y');
cout<<"Disini sudah bukan wilayah loop"<<endl;
return 0;
}