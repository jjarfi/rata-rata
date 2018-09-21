#include <iostream>
#include <stdio.h>
#include <ios>
using namespace std; 
int main(int argc, char** argv) {
int nilai [5], total, data, i, j;
j=0;
total=data;
cout<<"Total Rata-rata adalah =";
cin>>total;
for(i=0;i<data;i++)
{
j++;
cout<<"Nilai rata-"<<j<<" = ";
cin>>data;
total=total+data;
}
cout<<endl;
cout<<"Jumlah nilai rata-rata = "<<data<<endl;
cout<<"Total Nilai = "<<total<<endl;
return 0;
}