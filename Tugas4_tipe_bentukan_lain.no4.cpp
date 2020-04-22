#include <iostream>

struct Data {
char nama[100];
int usia;
} ;
void display(struct Data *st)
{
std::cout << "Nama : " << st->nama ;
std::cout << "\nUsia : " << st->usia ;
}
int main()
{
Data Data1;
std::cout <<"Nama : "; std::cin>>Data1.nama;
std::cout <<"Usia : ";std::cin>>Data1.usia;
display(&Data1);
return 0;
}
