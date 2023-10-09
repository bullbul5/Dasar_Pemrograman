#include <iostream>
#include <string>

using namespace std;

int main() {
	string nama = "Nabila Lailatanzila";
	char nim [20] = "1227050100";
	
	cout << "====================================" <<endl;
	cout << " TUGAS PRAKTIKUM DASAR PEMROGRAMAN "  <<endl;
	cout << "====================================" <<endl;
	cout << endl;
	cout << " Nama : " <<nama<<endl;
	cout << " NIM  : " <<nim<<endl;
	cout << endl;
	cout << "===================================="<<endl;
	cout << endl;
	
	char K;
	cout << " Masukan huruf = ";
	cin >> K;
	
	if (!isalpha(K)){ 
	cout << " Ulangi! karena kamu memasukan angka"<<endl;
	}
	
		else if  (K == 'a' || K == 'A' || K == 'i' || K == 'I' || K == 'u' || K == 'U' || K == 'e' || K == 'E' || K == 'o' || K == 'O') {
		cout << " Huruf yang anda masukan adalah huruf vokal"<<endl; 
		}
		
		else {
				 	
		cout << " Huruf yang anda masukan adalah huruf konsonan"<<endl; 
	}
	
	
	cout << endl;
	cout << "======================================"<<endl;
	cout << " MENENTUKAN BILANGAN GENAP DAN GANJIL" <<endl;
	cout << "======================================"<<endl;
	
	int b;
	cout << " Masukan bilangan bulat = ";
	cin >> b;
	
	
	if (!isalpha (b)){
	cout << "Ulangi! karena kamu memasukan huruf" <<endl;
	}
	else if (b%2==0) {
		cout << " Bilangan tersebut adalah bilangan genap"<<endl;
	}
	else {
		cout << " Bilangan tersebut adalah bilangan ganjil"<<endl;		
	}
	
		
	float tugas, uts, uas, nilai_akhir;
	char huruf;
	
	cout << endl;
	cout << "===================================="<<endl;
	cout << " MENGHITUNG NILAI AKHIR MATA KULIAH" <<endl;
	cout << "===================================="<<endl;
	cout << endl;
	cout << " Masukan nilai tugas: ";
	cin >> tugas;
	cout << " Masukan nilai UTS  : ";
	cin >> uts;
	cout << " Masukan nilai UAS  : ";
	cin >> uas;
	
	//rumus menghitung nilai akhir
	nilai_akhir = ((tugas*0.3) + (uts*0.3) + (uas*0.4));
	
	if (nilai_akhir >= 90){
		huruf = 'A';
	}
	else if (nilai_akhir >= 75){
		huruf = 'B';
	}
	else if (nilai_akhir >= 60){
		huruf = 'C';
	}
	else if (nilai_akhir >= 45){
		huruf = 'D';
	}
	else if (nilai_akhir < 45){
		huruf = 'E';
	}
	
	cout<<endl;
	cout << " Nilai akhir mata kuliah pada semester ini adalah " <<nilai_akhir<<endl;
	cout << " Grade: " <<huruf<<endl;
	
	return 0;
 }
	
	
	
			
	
