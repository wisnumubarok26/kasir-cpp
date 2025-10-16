#include <iostream>
using namespace std;

int main() {
    string nama;
    int jumlahBarang;
    double hargaBarang, total = 0, diskon = 0;

    cout << "===== PROGRAM KASIR SEDERHANA =====" << endl;
    cout << "Masukkan nama pembeli: ";
    getline(cin, nama);
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang;

    for (int i = 1; i <= jumlahBarang; i++) {
        cout << "Harga barang ke-" << i << ": Rp ";
        cin >> hargaBarang;
        total += hargaBarang;
    }


    if (total > 500000) {
        diskon = 0.2;
    } else if (total > 200000) {
        diskon = 0.1;
    } else {
        diskon = 0.05;
    }

    double potongan = total * diskon;
    double bayar = total - potongan;

    cout << "\n===== STRUK PEMBAYARAN =====" << endl;
    cout << "Nama Pembeli  : " << nama << endl;
    cout << "Total Belanja : Rp " << total << endl;
    cout << "Diskon        : " << (diskon * 100) << "%" << endl;
    cout << "Total Bayar   : Rp " << bayar << endl;

    return 0;
}
