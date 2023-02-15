#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    private:
        string nama;
        int nim;
        string prodi;
        string fakultas;
    
    public:
        Mahasiswa() {
        }

        Mahasiswa(string nama, int nim, string prodi, string fakultas) {
            this->nama = nama;
            this->nim = nim;
            this->prodi = prodi;
            this->fakultas = fakultas;
        }

        // untuk atribut nama
        void setNama(string nama) {
            this->nama = nama;
        }

        string getNama() {
            return this->nama;
        }

        // untuk atribut nim
        void setNim(int nim) {
            this->nim = nim;
        }

        int getNim() {
            return this->nim;
        }

        // untuk atribut prodi
        void setProdi(string prodi) {
            this->prodi = prodi;
        }

        string getProdi() {
            return this->prodi;
        }

        // untuk atribut fakultas
        void setFakultas(string fakultas) {
            this->fakultas = fakultas;
        }

        string getFakultas() {
            return this->fakultas;
        }

        // menampilkan data
        void tampilkan() {
            cout << "Nama     : " << nama << endl;
            cout << "Nim      : " << nim << endl;
            cout << "Prodi    : " << prodi << endl;
            cout << "Fakultas : " << fakultas << endl;
        }

        ~Mahasiswa() {
        }
};