#include <iostream>
using namespace std;

int main(){
	//variable nama dan nim
	string nama = "Muhammad Fakhruddin Al Farrosy";
	char nim [20] = "1227050088";
	//variable segitiga
	float alas,tinggi,luas,k;
	int a, b, c, keliling;
	//variable persegi
	int sisi1, sisi2, luaspersegi;
	int sisi3, kelilingpersegi;
	//variable lingkaran
	float luaslingkaran, phi = 3.14;
	int jari1;
	float kelilinglingkaran;
	int jari2, hasilkelilinglingkaran;
	
	
	cout<<"Nama : "<<nama<<endl;
	cout<<"NIM  : "<<nim<<endl;
	cout<<"====================================================="<<endl;
	k = 0.5;
	//Luas Segitiga
	
	cout<<"MENGHITUNG LUAS SEGITIGA"<<endl;
	cout<<" "<<endl;
	cout<<"Masukan nilai alas = ";
	cin>> alas;
	cout<<"Masukan nilai tinggi = ";
	cin>>tinggi;
	
	luas = k*alas*tinggi;
	
	cout<<"Luas segitiga adalah = "<<luas<<endl;
	cout<<" "<<endl;
	
	//Keliling segitiga
	cout<<"====================================================="<<endl;
	cout<<"MENGHITUNG KELILING SEGITIGA"<<endl;
	cout<<" "<<endl;
	cout<<"Masukan nilai A = ";
	cin>>a;
	cout<<"Masukan nilai B = ";
	cin>>b;
	cout<<"Masukan nilai C = ";
	cin>>c;
	
	keliling = a + b + c;
	
	cout<<"Keliling segitiga ialah = "<<keliling<<endl;
	cout<<" "<<endl;
	
	
	//Luas persegi
	cout<<"======================================================"<<endl;
	cout<<" "<<endl;
	cout<<"MENGHITUNG LUAS PERSEGI"<<endl;
	cout<<"Masukan sisi 1 = ";
	cin>>sisi1;
	cout<<"Masukan sisi 2 = ";
	cin>>sisi2;
	
	luaspersegi = sisi1 * sisi2;
	cout<<"Luas persegi ialah = "<<luaspersegi<<endl;
	cout<<" "<<endl;
	
	
	//Keliling persegi
	cout<<"======================================================"<<endl;
	cout<<" "<<endl;
	cout<<"MENGHITUNG KELILING PERSEGI"<<endl;
	cout<<"Masukan nilai keempat sisi = ";
	cin>>sisi3;
	
	kelilingpersegi = 4 * sisi3;
	cout<<"Keliling segitiga ialah = "<<kelilingpersegi<<endl;
	cout<<" "<<endl;
	
	
	//luas Lingkaran
	cout<<"======================================================"<<endl;
	cout<<" "<<endl;
	cout<<"MENGHITUNG LUAS LINGKARAN"<<endl;
	cout<<"Masukan jari jari lingkaran = ";
	cin>>jari1;
	
	luaslingkaran = phi * jari1 * jari1;
	cout<<"Luas lingkaran ialah = "<<luas<<endl;
	cout<<" "<<endl;
	
	
	//Keliling Lingkaran
	cout<<"======================================================"<<endl;
	cout<<" "<<endl;
	cout<<"MENGHITUNG KELILING LINGKARAN"<<endl;
	cout<<"Masukan jari jari lingkaran = ";
	cin>>jari2;
	
	
	return 0;
	
}
