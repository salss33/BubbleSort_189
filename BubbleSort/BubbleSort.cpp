#include <iostream>
using namespace std;


int a[20];           // Deklarasi array a dengan ukuran 20
int n;               // Deklarasi variable n untuk menyimpan banyaknya elemen pada array


void input() {     // Procedure untuk input 
    while (true) { // Looping
        cout << "Masukan banyaknya elemen pada array : ";  // Output ke layar
        cin >> n;     // Input dari pengguna 
        if (n <= 20)  // Jika n kurang dari atau sama dengan 20
            break;     // Keluar dari loop
        else {        // Jika n lebih dari 20;
            cout << "\nArray dapat mempunyaimaksimal 20 elemen. \n"; // Output ke layar
        }
    }
    cout << endl;                                // Output baris kosong
    cout << "===================" << endl;       // Output ke layar
    cout << "Masukan Elemen Array" << endl;      // Output ke layar
    cout << "===================" << endl;       // Output ke layar

    for (int i = 0; 1 < n; i++) {   // Looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke-" << (1 + 1) << ": ";   // Output ke layar 
        cin >> a[i];               // input dari pengguna
    }
}

void display() {     // Procedur untuk menampilkan hasil
    cout << endl;                                 // Output baris kosong
        cout << "==================================" << endl;   // Outpet ke layar
    cout << "Element Array yang telah tersusun" << endl;     // Output ke layar 
    cout << "==================================" << endl;   // Output ke layar 
    for (int j = 0; j < n; j++) {                // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                   // Output ke layar
    }
    cout << endl;                                           // Output baris kosong
}

void bubbleSortArray() {    // Procedure untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {       // Looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j < n - i; j++) { // Looping dengan j dimulai dari 0 hingga n-i-1
            if (a[j] > a[j + 1]) {        // Jika nilai pada a[j] lebih besar dari a[j+1]
                int temp = a[j];          // simpan nilai a[j] ke variable sementara temp
                a[j] = a[j + 1];          // assign nilai a[j+1] ke a[j]
                a[j + 1] = temp;          // Assign nilai temp ke a[j+1]
            }
        }
    }
}


int main() {
    input();       // Memanggil read() 
    bubbleSortArray();   // Memanggil bubbleSortArray()
    display();     // Memanggil display() 
    return 0;
}