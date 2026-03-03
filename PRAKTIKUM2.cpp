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