#include <iostream>
#include <string>

using namespace std;

// membuat kelas mahasiswa
class Mahasiswa{
    // atribut yang diperlukan
    private:
        string nama;
        int nim;
        string prodi;
        string fakultas;
    
    public:
        // konstruktor kosong
        Mahasiswa() {
        }

        // konstruktor dengan parameter
        Mahasiswa(string nama, int nim, string prodi, string fakultas) {
            this->nama = nama;
            this->nim = nim;
            this->prodi = prodi;
            this->fakultas = fakultas;
        }

        // tetapkan nama
        void setNama(string nama) {
            this->nama = nama;
        }

        // get nama
        string getNama() {
            return this->nama;
        }

         // tetapkan nim
        void setNim(int nim) {
            this->nim = nim;
        }

        // get nim
        int getNim() {
            return this->nim;
        }

         // tetapkan prodi
        void setProdi(string prodi) {
            this->prodi = prodi;
        }

        // get prodi
        string getProdi() {
            return this->prodi;
        }

         // tetapkan fakultas
        void setFakultas(string fakultas) {
            this->fakultas = fakultas;
        }
        
        // get fakultas
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
        
        // deconstruct
        ~Mahasiswa() {
        }
};
