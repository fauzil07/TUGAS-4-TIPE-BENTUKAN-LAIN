#include <iostream>
#include <string.h>
using namespace std;

struct Data {
		char a[50];
		int b;
	};
int main(){
	struct Data dt[4];
	int i;
	for (i=0;i<2;i++){
		cout<<"Masukkan data "<<i+1<<endl;
		cout<<"Nama : ";
		cin>>dt[i].a;
		cout<<"Usia : ";
		cin>>dt[i].b;
	}cout<<endl;
	for(i=0;i<2;i++){
	cout<<"Data ke "<<i+1<<endl;
	cout<<"Nama : "<<dt[i].a<<endl;
	cout<<"Usia : "<<dt[i].b<<endl;
	}
	return 0;
}

