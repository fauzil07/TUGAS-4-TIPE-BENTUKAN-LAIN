#include <iostream>
#include <string.h>
using namespace std;
struct data
{
string nama;
int usia;
};
typedef struct data D1;
int main ()
{

D1 data1 = { "Azil", 18};
cout<<"Nilai isi variable struct \n";
cout<<"Nama ==>" << data1.nama;
cout <<"\nUsia ==>"<< data1.usia;
return 0;

}
