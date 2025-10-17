#include <iostream>
#include <iomanip>
using namespace std;
string nama_barang[100];
int harga_satuan[100], kuantitas[100], total_harga[100];
int jumlah_barang, total_bayar;
int main()
{
    cout << "==========PROGRAM KASIR SEDERHANA==========\n\n";
    cout << "Masukan jumlah (jenis) barang : ";
    cin >> jumlah_barang;
    cin.ignore();
    cout << endl;
    for (int i = 0; i < jumlah_barang; i++)
    {
        cout << "Masukan nama barang ke-" << i + 1 << " : ";
        getline(cin, nama_barang[i]);
        cout << "Masukan kuantitas " << nama_barang[i] << " : ";
        cin >> kuantitas[i];
        cout << "Masukan harga " << nama_barang[i] << " (satuan) : ";
        cin >> harga_satuan[i];
        cin.ignore();
        total_harga[i] = kuantitas[i] * harga_satuan[i];
        cout << endl;
    }
    cout << left << setw(21) << "Nama Barang"
         << right << setw(9) << "Kuantitas"
         << right << setw(22) << "Harga Satuan"
         << right << setw(21) << "Total Harga" << endl;
    cout << string(73, '-') << endl;

    for (int i = 0; i < jumlah_barang; i++)
    {
        total_bayar += total_harga[i];
        cout << left << setw(21) << nama_barang[i]
             << right << setw(9) << kuantitas[i]
             << right << setw(22) << harga_satuan[i]
             << right << setw(21) << total_harga[i] << endl;
    }
    cout << string(73, '-') << endl;
    cout << left << setw(40) << "Total Bayar"
         << right << setw(33) << total_bayar;
}