#include <iostream>
using namespace std;
 
int main() {
  float a, b, pilih, hasil;
  char ulang;

  	awal:
  	cout << "PROGRAM C
    KALKULATOR SEDERHANA" << endl;
  	cout << "\n";
  	cout << "1.perkalian\n";
  	cout << "2.pembagian\n";
    cout << "3.penambahan\n";
    cout << "4.pengurangan\n";

  	cout << "pilih operasi (1,2,3,4) :";
  	cin >> pilih;

  	cout << endl;
  
  	if(pilih == 1){
    cout << "masukan angka a =";
    cin >> a;
    cout << "masukan angka b =";
    cin >> b;
    hasil = a * b;
    cout << a << "x" << b << "=" << hasil;
    }

    else if(pilih == 2){
    cout << "masukan angka a =";
    cin >> a;
    cout << "masukan angka b =";
    cin >> b;
    hasil = a / b;
    cout << a << ":" << b << "=" << hasil;
    }

    else if(pilih == 3){
    cout << "masukan angka a =";
    cin >> a;
    cout << "masukan angka b =";
    cin >> b;
    hasil = a + b;
    cout << a << "+" << b << "=" << hasil;
    }
   
    else if(pilih == 4){
    cout << "masukan angka a =";
    cin >> a;
    cout << "masukan angka b =";
    cin >> b;
    hasil = a - b;
    cout << a << "-" << b << "=" << hasil;
    }

    else{
    	cout << "maaf pilih sesuai operasi";
    }
  
    cout << "\n\n";
    cout << "apakah anda ingi ulang (y/t) :";
    cin >> ulang;
  
    if(ulang == 'y'){
    goto awal;
    }
  
    else{
    cout << "terima kasih anda telah keluar";
    }
    return 0;
}
