#include<iostream>
using namespace std;

int main()
{
    enum hari{SENIN,SELASA,RABU,KAMIS,JUMAT,SABTU,MINGGU};
    enum hari sekarang;
    sekarang = SELASA;
    cout << "Hari Rabu adalah hari ke- " << sekarang+2;
}
