#include <iostream.h>
#include <conio.h>

/**
*bundet.com
*Mencari Nilai Maximum dan Minimum (simple)
*/

void main() {

       int angka, jumlah, max;

       cout << "2. Mencari nilai terbesar. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;
       cout << endl;

       for (int i = 1; i <= jumlah; i++) {

       cout << "Masukkan Angka       : "; cin >> angka;

       if ( i == 1 ) {
             max = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else {}
           }

       cout << endl;
       cout << "Nilai terbesar           : " <<  max << endl;

       getch();
       }