#include "Mahasiswa.cpp"

int main() {
    // welcome!
    cout << "\n===== Selamat Datang di Database Mahasiswa =====\n" << endl;

    // banyaknya data. variabel n untuk maksimalnya. variabel m untuk yang diinginkan
    int n = 0, m = 0;
    cout << "Masukkan maksimal data mahasiswa : ";
    cin >> n;
    cout << "Masukkan banyak data yang diinginkan : ";
    cin >> m;

    // membuat array of objects dan variabel lainnya
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
       
        // memasukkannya ke dalam atribut nama kelas Mahasiswa
        data[i].setNama(nama);
        data[i].setNim(nim);
        data[i].setProdi(prodi);
        data[i].setFakultas(fakultas);

        // baris baru
        cout << endl
    }

    // menu
    int pilih1 = 0;
    // menu akan terus muncul sampai masukkan pilih1 adalah 5/keluar program
    do{
        // pilih menu yg diinginkan
        cout << "\n== Menu ==" << endl;
        cout << "(1) Tambah Data\n(2) Edit Data\n(3) Hapus Data\n(4) Tampilkan Data\n(5) Keluar Program\n\n=> ";
        cin >> pilih1;
        
        // menambahkan data
        if(pilih1 == 1) {
            cout << "\n== Tambah Data ==" << endl;
            
            // jumlah data bertambah satu
            m = m + 1;
            
            // ambil nilai semua atribut
            cout << "Nama     : "; cin >> nama;
            cout << "Nim      : "; cin >> nim;
            cout << "Prodi    : "; cin >> prodi;
            cout << "Fakultas : "; cin >> fakultas;
            
            // set nilai semua atribut
            data[m].setNama(nama);
            data[m].setNim(nim);
            data[m].setProdi(prodi);
            data[m].setFakultas(fakultas);
        } 
        
        // mengedit data
        else if(pilih1 == 2) {
            cout << "\n== Edit Data ==" << endl;

            // pilih baris yg akan diedit
            int baris;
            cout << "Edit data baris ke : ";
            cin >> baris;

            // ambil nilai semua atribut yang baru, kemudian set nilainya
            cout << "\nNama     : "; cin >> nama;
            data[baris-1].setNama(nama);
            cout << "\nNim      : "; cin >> nim;
            data[baris-1].setNim(nim);
            cout << "\nProdi    : "; cin >> prodi;
            data[baris-1].setProdi(prodi);
            cout << "\nFakultas : "; cin >> fakultas;
            data[baris-1].setFakultas(fakultas);
        } 
        
        // menghapus data
        else if(pilih1 == 3) {
            cout << "\n== Hapus Data ==" << endl;

            // pilih baris yang akan dihapus
            int baris;
            cout << "Hapus data baris ke : ";
            cin >> baris;

            // hapus data dengan memainkan indeks
            for(int j = baris - 1; j < baris - 1; j++) {
                data[j] = data[j + 1];
            }
        } 

        // menampilkan data
        else if(pilih1 == 4) {
            cout << "\n== Isi Data ==" << endl;

            // tampilkan data
            for(int j = 0; j < m; j++) {
                cout << "Data ke-" << j + 1 << "." << endl;
                data[j].tampilkan();
                if(j != m - 1)
                {
                    cout << endl;
                }
            }
        }
    }while (pilih1 != 5); // condition

    return 0;
}