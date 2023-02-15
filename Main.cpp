#include "Mahasiswa.cpp"

int main() {
    // welcome!
    cout << "\n===== Selamat Datang di Database Mahasiswa =====\n" << endl;

    // banyaknya data
    int n = 0, m = 0;
    cout << "Masukkan maksimal data mahasiswa : ";
    cin >> n;
    cout << "Masukkan banyak data yang diinginkan : ";
    cin >> m;

    // membuat variabel
    Mahasiswa data[n];
    string nama, prodi, fakultas;
    int nim;

    // masukkan data mahasiswa
    for(int i = 0; i < m; i++) {
        // memasukkan nilai nama, nim, prodi, fakultas
        cout << "\nIsi Data !\n";
        cout << "\n#Data ke-" << i+1 << "." << endl;
        cout << "Nama     : "; cin >> nama;
        cout << "Nim      : "; cin >> nim;
        cout << "Prodi    : "; cin >> prodi;
        cout << "Fakultas : "; cin >> fakultas;
       
        // memasukkannya ke dalam atribut kelas Mahasiswa
        data[i].setNama(nama);
        data[i].setNim(nim);
        data[i].setProdi(prodi);
        data[i].setFakultas(fakultas);

        // baris baru
        cout << endl
    }

    // menu
    int pilih1 = 0;
    do{
        cout << "\n== Menu ==" << endl;
        cout << "(1) Tambah Data\n(2) Edit Data\n(3) Hapus Data\n(4) Tampilkan Data\n(5) Keluar Program\n\n=> ";
        cin >> pilih1;

        if(pilih1 == 1) {
            // menambahkan data
            cout << "\n== Tambah Data ==" << endl;
            m = m + 1;
            cout << "Nama     : "; cin >> nama;
            cout << "Nim      : "; cin >> nim;
            cout << "Prodi    : "; cin >> prodi;
            cout << "Fakultas : "; cin >> fakultas;
            data[m].setNama(nama);
            data[m].setNim(nim);
            data[m].setProdi(prodi);
            data[m].setFakultas(fakultas);
        } 
        else if(pilih1 == 2) {
            // mengedit data
            cout << "\n== Edit Data ==" << endl;
            int baris;
            cout << "Edit data baris ke : ";
            cin >> baris;
            cout << "\nNama     : "; cin >> nama;
            data[baris-1].setNama(nama);
            cout << "\nNim      : "; cin >> nim;
            data[baris-1].setNim(nim);
            cout << "\nProdi    : "; cin >> prodi;
            data[baris-1].setProdi(prodi);
            cout << "\nFakultas : "; cin >> fakultas;
            data[baris-1].setFakultas(fakultas);
        } 
        else if(pilih1 == 3) {
            // menghapus data
            cout << "\n== Hapus Data ==" << endl;
            int baris;
            cout << "Hapus data baris ke : ";
            cin >> baris;
            for(int j = baris - 1; j < baris - 1; j++) {
                data[j] = data[j + 1];
            }
        } 
        else if(pilih1 == 4) {
            // menampilkan data
            cout << "\n== Isi Data ==" << endl;
            for(int j = 0; j < m; j++) {
                cout << "Data ke-" << j + 1 << "." << endl;
                data[j].tampilkan();
                if(j != m - 1)
                {
                    cout << endl;
                }
            }
        }
    }while (pilih1 != 5);

    return 0;
}