import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // welcome!
        System.out.println("\n===== Selamat Datang di Database Mahasiswa =====\n");

        // banyaknya data. variabel n untuk maksimalnya. variabel m untuk yang diinginkan
        int n = 0, m = 0;
        
        // scan variabel n
        System.out.print("Masukkan maksimal data mahasiswa : ");
        Scanner sc = new Scanner(System.in);
        try {
            n = sc.nextInt();
        }catch(Exception e) {
        }

        // scan variabel m
        System.out.print("Masukkan banyak data yang diinginkan : ");
        try {
            m = sc.nextInt();
        }catch(Exception e) {
        }

        // membuat array of objects dan variabel lainnya
        Mahasiswa[] arrMhs = new Mahasiswa[n];        
        String nama = "", prodi = "", fakultas = "";
        int nim = 0;

        // masukkan data mahasiswa
        System.out.print("\nIsi Data!\n");
        // untuk menghitung urutan data
        int hitung = 1;
        for(int i = 0; i < m; i++) {
            System.out.print("\n#Data Ke-" + hitung + ".\n");
            
            // memasukkan nilai nama, nim, prodi, fakultas
            System.out.print("Nama     : ");
            nama = sc.next();
            System.out.print("Nim      : ");
            try {
                nim = sc.nextInt();
            } catch(Exception e) {
            }
            System.out.print("Prodi    : ");
            prodi = sc.next();
            System.out.print("Fakultas : ");
            fakultas = sc.next();

            // memasukkannya ke dalam atribut nama kelas Mahasiswa
            arrMhs[i] = new Mahasiswa(nama, nim, prodi, fakultas);

            // nilai hitung bertambah
            hitung++;
        }

        // menu
        int pilih1 = 0;
        // menu akan terus muncul sampai masukkan pilih1 adalah 5/keluar program
        do{
            // pilih menu yg diinginkan
            System.out.print("\nMenu :\n");
            System.out.print("(1) Tambah Data\n(2) Edit Data\n(3) Hapus Data\n(4) Tampilkan Data\n(5) Keluar Program\n\n=> ");
            try {
                pilih1 = sc.nextInt();
            } catch(Exception e) {
            }

            // menambahkan data
            if(pilih1 == 1) {
                System.out.print("\n== Tambah Data==\n");
                
                // jumlah data bertambah satu
                m = m + 1;
                
                // ambil nilai semua atribut
                System.out.print("Nama     : ");
                nama = sc.next();
                System.out.print("Nim      : ");
                try {
                    nim = sc.nextInt();
                } catch(Exception e) {
                }
                System.out.print("Prodi    : ");
                prodi = sc.next();
                System.out.print("Fakultas : ");
                fakultas = sc.next();
            
                // set nilai semua atribut
                arrMhs[m] = new Mahasiswa(nama, nim, prodi, fakultas);
            }

            // mengedit data
            else if(pilih1 == 2) {
                System.out.print("\n== Edit Data ==\n");
                
                // pilih baris yg akan diedit
                int baris = 0;
                System.out.print("Edit data baris ke : ");
                try {
                    baris = sc.nextInt();
                }catch(Exception e) {
                }
                // ambil nilai semua atribut yang baru, kemudian set nilainya
                System.out.print("Nama     : ");
                nama = sc.next();
                arrMhs[baris-1].setNama(nama);
                System.out.print("Nim      : ");
                try {
                    nim = sc.nextInt();
                }catch(Exception e) {
                }
                arrMhs[baris-1].setNim(nim);
                System.out.print("Prodi    : ");
                prodi = sc.next();
                arrMhs[baris-1].setProdi(prodi);
                System.out.print("Fakultas : ");
                fakultas = sc.next();
                arrMhs[baris-1].setFakultas(fakultas);
            }

            // menghapus data
            else if(pilih1 == 3) {
                System.out.print("\n== Hapus Data ==\n");
                
                // pilih baris yang akan dihapus
                int baris = 0;
                System.out.print("Hapus data baris ke : ");
                try {
                    baris = sc.nextInt();
                }catch(Exception e) {
                }
                
                // hapus data dengan memainkan indeks
                for(int i = baris-1; i < baris - 1; i++) {
                    arrMhs[i] = arrMhs[i + 1];
                }
            }

            // menampilkan data
            else if(pilih1 == 4) {
                System.out.print("\n== Isi Data ==\n");
                
                // set awal nilai hitung
                hitung = 1;
                
                // tampilkan data
                for(int i = 0; i < m; i++) {
                    System.out.print("\n#Data Ke-" + hitung + ".\n");
                    
                    // tampilkan data
                    System.out.print("Nama     : ");
                    System.out.print(arrMhs[i].getNama());
                    System.out.print("\nNim      : ");
                    System.out.print(arrMhs[i].getNim());
                    System.out.print("\nProdi    : ");
                    System.out.print(arrMhs[i].getProdi());
                    System.out.print("\nFakultas : ");
                    System.out.print(arrMhs[i].getFakultas() + "\n");
                    
                    // increment
                    hitung++;
                    
                    // jika data terakhir jangan beri print
                    if(i != m - 1) {
                        System.out.print("");
                    }
                }
            }
        }while(pilih1 != 5); // condition
    }
}