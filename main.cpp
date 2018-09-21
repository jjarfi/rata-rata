#include <iostream>
#include <stdio.h>
#include <ios>
using namespace std; 
int main(int argc, char** argv) {
int pilih, p,l, Pilihan,i,bil,habis,batas,x, y;
float luas ;
Menuutama:
do {
cout<<"######## Program Menghitung Geometri Dan Aritmatika ########## \n";
cout<<" silakan pilih menu di bawah ini:\n";
cout<<endl;
cout<<"1. menghitung luas lingkaran\n";
cout<<"2. menghitung keliling lingkaran\n";
cout<<"3. menghitung luas persegi panjang\n";
cout<<"4. menghitung keliling persegi panjang\n";
cout<<"5. deteksi bilangan prima\n";
cout<<"6. deret bilangan ganjil\n";
cout<<"7. deret bilangan genap\n";
cout<<"8. keluar\n";
cout<<" silakan tentukan pilihan anda = ";
cin>>pilih;

switch (pilih)
{
cout<<" silakan pilih menu di bawah ini: \n";
case 1 :
lingkaran:
cout<<"1. menghitung luas lingkaran\n";
cout;
cout<<" nilai diameter = ";
cin>>p;
cout<<endl;
luas =3.14*p;
cout<<"luasnya adalah = " <<luas;
cout<<endl;
cout<<endl;
cout<<" Pilihan menu :";
cout<<endl;
cout<<"1. Hitung Lagi "<<endl;
cout<<"2. Menu utama "<<endl;
cout<<" masukan pilihan anda ";
cin>>Pilihan;
if (Pilihan ==1)
{
goto lingkaran ;
}
else if (Pilihan==2)
{
goto Menuutama;
}
else
{
cout<<"inputan salah";
}

return 0;
break;
case 2 :
kelilinglingkaran:

cout<<"2. menghitung keliling lingkaran\n";
cout;
cout<<" nilai jari = ";
cin>>p;
cout<<endl;
luas =2*3.14*p;
cout<<"Kelilingnya adalah = " <<luas;
cout<<endl;
cout<<endl;
cout<<" Pilihan menu :";
cout<<endl;
cout<<"1. Hitung Lagi "<<endl;
cout<<"2. Menu utama "<<endl;
cout<<" masukan pilihan anda ";
cin>>Pilihan;
if (Pilihan ==1)
{
goto kelilinglingkaran ;
}
else if (Pilihan==2)
{
goto Menuutama;
}
else
{
cout<<"inputan salah";
}
return 0;
break;
case 3 :
luaspersegi:

cout<<"3. menghitung luas persegi panjang\n";
cout;
cout<<" nilai Panjang = ";
cin>>p;
cout<<" nilai lebar   = ";
cin>>l;
cout<<endl;
luas =p*l;
cout<<"Luasnya adalah = " <<luas;
cout<<endl;
cout<<endl;
cout<<" Pilihan menu :";
cout<<endl;
cout<<"1. Hitung Lagi "<<endl;
cout<<"2. Menu utama "<<endl;
cout<<" masukan pilihan anda ";
cin>>Pilihan;
if (Pilihan ==1)
{
goto luaspersegi ;
}
else if (Pilihan==2)
{
goto Menuutama;
}
else
{
cout<<"inputan salah";
}
return 0;
break;
case 4 :
kelilingpersegi:
cout<<"4. menghitung keliling persegi panjang\n";
cout;
cout<<" nilai Panjang = ";
cin>>p;
cout<<" nilai lebar   = ";
cin>>l;
cout<<endl;
luas =2*p+2*l;
cout<<"Luasnya adalah = " <<luas;
cout<<endl;
cout<<endl;
cout<<" Pilihan menu :";
cout<<endl;
cout<<"1. Hitung Lagi "<<endl;
cout<<"2. Menu utama "<<endl;
cout<<" masukan pilihan anda ";
cin>>Pilihan;
if (Pilihan ==1)
{
goto kelilingpersegi ;
}
else if (Pilihan==2)
{
goto Menuutama;
}
else
{
cout<<"inputan salah";
}
return 0;
break;
case 5 :
prima:

cout<<"5. deteksi bilangan prima\n";
cout<<"ketiklah bilangan bulat = ";
cin>>bil;
if(i==1)
{
cout<<bil<<" Bukan Bilangan Prima";
}
else if (i==2)
{
cout<<bil<<" Bilangan Prima";
}
else
{
for (i=2;i<bil;i++)
{
if(bil%i==0)
{
habis=1;
break;
}
else
{
habis=0;
}
}
if (habis>0)
{
cout<<bil<<" Bukan Bilangan Prima";
}
else
{
cout<<bil<<" Bilangan  Prima";
}
cout<<endl;
cout<<endl;
cout<<" Pilihan menu :";
cout<<endl;
cout<<"1. Hitung Lagi "<<endl;
cout<<"2. Menu utama "<<endl;
cout<<" masukan pilihan anda ";
cin>>Pilihan;
if (Pilihan ==1)
{
goto prima ;
}
else if (Pilihan==2)
{
goto Menuutama;
}
else
{
cout<<"inputan salah";
}
}
return 0;
break;
case 6 :
ganjil :
cout<<"6. deret bilangan ganjil\n";
cout<<"masukan angka :";
cin>>batas;
cout<<endl;
cout<<"deret bilangan ganjil samapai angka "<<batas<<" adalah : "<<endl;
cout<<endl;
for (i=0;i<=batas;i++)
{
if(i%2!=0)
{
cout<<i<<" ";
}
}
cout<<endl;
cout<<endl;
cout<<" Pilihan menu :";
cout<<endl;
cout<<"1. Hitung Lagi "<<endl;
cout<<"2. Menu utama "<<endl;
cout<<" masukan pilihan anda ";
cin>>Pilihan;
if (Pilihan ==1)
{
goto ganjil ;
}
else if (Pilihan==2)
{
goto Menuutama;
}
else
{
cout<<"inputan salah";
}
return 0;
break;
case 7 :
genap:

cout<<"7. deret bilangan genap\n";
cout<<"masukan angka :";
cin>>batas;
cout<<endl;
cout<<"deret bilangan ganjil samapai angka "<<batas<<" adalah : "<<endl;
cout<<endl;
for (i=0;i<=batas;i++)
{
if(i%2!=1)
{
cout<<i<<" ";
}
}
cout<<endl;
cout<<endl;
cout<<" Pilihan menu :";
cout<<endl;
cout<<"1. Hitung Lagi "<<endl;
cout<<"2. Menu utama "<<endl;
cout<<" masukan pilihan anda ";
cin>>Pilihan;
if (Pilihan ==1)
{
goto genap ;
}
else if (Pilihan==2)
{
goto Menuutama;
}
else
{
cout<<"inputan salah";
}

break;

break;
case 8 :
return 0;
cout<<"terima kasih"<<endl;
break;
default:
cout<<"pilihan hanya 1-8 saja\n";
return 0;
break;
}
} while (pilih !=8);
{
goto Menuutama;
}
(30,5);cout<<"Terima kasih! \n";
return 0;
}