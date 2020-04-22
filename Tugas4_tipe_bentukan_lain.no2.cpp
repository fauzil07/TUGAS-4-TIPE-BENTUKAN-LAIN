#include <iostream>
struct Data {
		char nama[100];
		int usia;
	};
void display(struct Data dt){
std::cout<<"Nama : "<<dt.nama;
std::cout<<"\nusia : "<<dt.usia;
}
int main(){
	Data Data1;
	std::cout<<"Nama : ";
	std::cin>>Data1.nama;
	std::cout<<"usia : ";
	std::cin>>Data1.usia;
	display(Data1);
	return 0;
} 
