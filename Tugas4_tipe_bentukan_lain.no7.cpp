#include <iostream>
using namespace std;

struct Data {
		char nama[100];
		int usia;
	};
int main()
{
    Data *ptr, a;
    ptr = &a;
    cout << "Nama : ";
    cin >> (*ptr).nama;
    cout << "Usia : ";
    cin >> (*ptr).usia;
     
    cout <<"Nama       :"<< (*ptr).nama<<endl;
    cout <<"Usia   :"<< (*ptr).usia<<endl;

    return 0;
}
