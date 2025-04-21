#include <iostream>
using namespace std;

struct Buku {
    string judul, buku;
    int tahunTerbit;
    Buku *next;
};

void tambahBuku(string judul, string buku, int tahunTerbit){
    cout << "Fill this data for lending book: " << endl;
    cout << "Judul Buku"; getline(cin, judul);
    cout << "Judul Buku";  getline(cin, buku);
    cout << "Tahun Terbit Buku"; cin >> tahunTerbit;
}


int main(){

    return 0;
}