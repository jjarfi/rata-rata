#include <iostream>
#include <ostream>
#include <ios>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
cout<<"Program ini akan menghitung mundur nilai"
    <<"dari 10 sampai 0" << endl << endl;
    for (int i = 10; i >= 0; i--)
    {
     cout<< i << endl;
     }
    cout<<endl<<"Pernyataan ini berada diluar looping"<<endl;
    return 0;
    }