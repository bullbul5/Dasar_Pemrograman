#include <iostream>
using namespace std;
int main ()
{
	string x,y,z;
	float quantity1, quantity2;
	float harga1,harga2;
	
		
	cout << "Nama costumer: ";
	cin >> x;
	cout << "Masukan nama barang 1: ";
	cin >> y;
	cout << "Masukan harga 1: ";
	cin >> harga1;
	cout << "Masukan quantity 1: ";
	cin >> quantity1;
	cout << "Sub total : "
		<<quantity1*harga1<<endl;
	cout << "======================="<<endl;
	
	cout << "Masukan nama barang 2: ";
	cin >> z;
	cout << "Masukan Harga 2: ";
	cin >> harga2;
	cout << "Masukan quantity 2: " ;
	cin >> quantity2;
	cout << "Sub total : "
		<<quantity2*harga2<<endl;
	cout << "======================="<<endl;
	cout << "Total harga : "
		<<quantity1*harga1 + quantity2*harga2<<endl;
 
 return 0;
}
