// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l, luas;

// implementasi prosedur dan fungsi 
void input() {
    cout << "masukan panjang = ";
    cin >> p;
    cout << "masukan lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b + c;
}

int luaspersegi(){
    return p * 1;
}

void output(){
    cout << "hasilnya = " << luaspersegi() <<endl;
    cout << "terima kasih";
}

int main(){  //mulai
    input();
    output();
    //selesai

}

// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l;

// implementasi prosedur dan fungsi
void input() {
    cout << "masukan panjang = ";
    cin >> p;
    cout << "masukan lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b + c;
}

float jumlah(float a, float b, float c){

}

int luaspersegip(int a, int b){
    return a * b;
}

void output(){
    cout << "hasilnya = " << luaspersegip(p, l) << endl;
    cout << "terimakasih" << endl; 
}

int main() {
    input();
    output();
    cout << "hasil penjumlahan " << jumlah(15.1, 24.9, 67);
} // selesai


#include <iostream>
using namespace std;

//deklarasi variable
float jariJari;
float phi = 3.14159;
//bagian fungsi
void awal(){
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
}
float luas (float jari_jari, float phi){
    return phi * jariJari * jariJari; 
}
void akhir (){
    cout << "Hasil Luas untuk lingkaran dengan jari-jari " << jariJari << " adalah: " << luas(jariJari, phi);
}
int main(){
    awal();
    akhir();
}
