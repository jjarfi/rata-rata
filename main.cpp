#include <iostream>
#include <ostream>
#include <ios>
#include <stdio.h>
#define stg 0.5

using namespace std;

int main(int argc, char** argv) {
int hadir, tugas, uts, uas, skor;
char Nilai;
cout<<"Kehadiran  = ";
cin>>hadir;
hadir=10*0.1;
cout<<"Tugas  = ";
cin>>tugas;
tugas=10*0.2;
cout<<"UTS  = ";
cin>>uts;
uts=10*0.3;
cout<<"UAS  = ";
cin>>uas;
uas=10*0.4;
if (skor<50)
{
Nilai='E';
}
else if (skor<60)
{
Nilai='D';
}
else if (skor<70)
{
Nilai='C';
}
else if (skor<90)
{
Nilai='B';
}
else if (skor<=100)
{
Nilai='A';
}
else
{
cout<<"Input Nilai Error\n";
Nilai='X';
}
cout<<"Skor = "<<skor<<endl;
cout<<"Nilai = "<<Nilai<<endl;
return 0;
}