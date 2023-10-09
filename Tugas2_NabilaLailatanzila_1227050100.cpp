#include <iostream>
using namespace std;

int main(){
	string nama = "Nabila Lailatanzila"; //variabel nama dan nim
	char nim [20] = "1227050100";
	
	float alas_segitiga, tinggi_segitiga, luas_segitiga, keliling_segitiga; //variabel segitiga
	int sisi_1,sisi_2,sisi_3;
	
	int sisi1, sisi2, luas_persegi; //variabel persegi
	int keliling_persegi;
	
	float luas_lingkaran, phi = 3.14; //variabel lingkaran
	int jarijari1;
	float keliling_lingkaran;
	int jarijari2;
	
	cout<<"Nama : "<<nama<<endl;
	cout<<"NIM : "<<nim<<endl;
	
	
	cout<<"========================================="<<endl;
	
	//luas segitiga
	cout<<"MENGHITUNG LUAS SEGITIGA" <<endl;
	cout<<"Masukan alas segitiga = ";
	cout<<" ";
	cin>>alas_segitiga;
	cout<<"Masukan tinggi segitiga = ";
	cin>>tinggi_segitiga;
	
	luas_segitiga = (alas_segitiga*tinggi_segitiga)/2;	
	
	cout<<"Luas segitiga adalah = "<<luas_segitiga<<endl;
	cout<<" "<<endl;
	
	//Keliling segitiga
	cout<<"========================================="<<endl;
	cout<<"MENGHITUNG KELILING SEGITIGA"<<endl;
	cout<<"Masukan sisi 1 segitiga = ";
	cout<<" ";
	cin>>sisi_1;
	cout<<"Masukan sisi 2 segitiga = ";
	cout<<" ";
	cin>>sisi_2;
	cout<<"masukan sisi 3 segitiga = ";
	cout<<" ";
	cin>>sisi_3;
	
	keliling_segitiga = sisi_1+sisi_2+sisi_3;
	
	cout<<"Keliling segitiga adalah = "<<keliling_segitiga<<endl;
	cout<<" "<<endl;
	
	//Luas persegi
	cout<<"========================================="<<endl;
	cout<<"MENGHITUNG LUAS PERSEGI"<<endl; 
	cout<<"Masukan sisi persegi = ";
	cout<<" ";
	cin>>sisi1;
	
	luas_persegi = sisi1*sisi1;
	
	cout<<"Luas persegi adalah = "<<luas_persegi<<endl;
	cout<<" "<<endl;
	
	//Keliling persegi
	cout<<"========================================="<<endl;
	cout<<"MENGHITUNG KELILING PERSEGI"<<endl;
	cout<<"Masukan sisi persegi = ";
	cout<<" ";
	cin>>sisi2;
	
	keliling_persegi = 4*sisi2;
	
	cout<<"keliling persegi adalah = "<<keliling_persegi<<endl;
	cout<<" "<<endl;
	
	
	//luas lingkaran 
	cout<<"========================================="<<endl;
	cout<<"MENGHITUNG LUAS LINGKARAN"<<endl; 
	cout<<"Masukan jari jari lingkaran = ";
	cout<<" ";
	cin>>jarijari1;
	
	luas_lingkaran = phi*jarijari1*jarijari1;
	
	cout<<"Luas lingkaran adalah = "<<luas_lingkaran<<endl;
	cout<<" "<<endl;
	

	
	//Keliling lingkaran 
	cout<<"========================================="<<endl;
	cout<<"MENGHITUNG KELILING LINGKARAN"<<endl; 
	cout<<"Masukan jari jari lingkaran = ";
	cout<<" ";
	cin>>jarijari2;
	
	keliling_lingkaran = 2*phi*jarijari2;
	
	cout<<"Keliling lingkaran adalah = "<<keliling_lingkaran<<endl;
	cout<<" ";
	
	return 0;	
}
