// membuat kelas mahasiswa
public class Mahasiswa{
    // atribut yang diperlukan
    private String nama;
    private int nim;
    private String prodi;
    private String fakultas;
    
    // konstruktor kosong
    Mahasiswa() {
    }

    // konstruktor dengan parameter
    Mahasiswa(String nama, int nim, String prodi, String fakultas) {
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    // tetapkan nama
    public void setNama(String nama) {
        this.nama = nama;
    }

    // get nama
    public String getNama() {
        return this.nama;
    }
    
    // tetapkan nim
    public void setNim(int nim) {
        this.nim = nim;
    }

    // get nim
    public int getNim() {
        return this.nim;
    }

    // tetapkan prodi
    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    // get prodi
    public String getProdi() {
        return this.prodi;
    }

    // tetapkan fakultas
    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }
    
    // get fakultas
    public String getFakultas() {
        return this.fakultas;
    }
}
