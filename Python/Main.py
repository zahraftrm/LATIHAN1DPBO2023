from Mahasiswa import Mahasiswa

# welcome!
print ("\n===== Selamat Datang di Database Mahasiswa =====\n")

# banyaknya data. variabel n untuk maksimalnya. variabel m untuk yang diinginkan
n = int(input("Masukkan maksimal data mahasiswa : "))
m = int(input("Masukkan banyak data yang diinginkan : "))

# memasukkan data
arrMhs = []
print ("\nIsi Data!\n")
for i in range(m):
    nama = str(input("Nama     : "))
    nim = int(input("Nim      : "))
    prodi = str(input("Prodi    : "))
    fakultas = str(input("Fakultas : "))

    print ("\n")
    # masukkan nilai atribut
    arrMhs.append(Mahasiswa(nama, nim, prodi, fakultas))

# menu
pilih = 0
# akan terus looping sampai ada masukan keluar dari program/5
while (pilih != 5):
    print ("\nMenu :\n")
    print ("(1) Tambah Data\n(2) Edit Data\n(3) Hapus Data\n(4) Tampilkan Data\n(5) Keluar Program\n\n=> ")
    
    # pilih input
    pilih = int(input())

    # menambah data
    if (pilih == 1):
        print ("\n== Tambah Data==\n")
        
        # jumlah data bertambah satu
        m = m + 1

        # ambil nilai semua atribut
        nama = str(input("Nama     : "))
        nim = int(input("Nim      : "))
        prodi = str(input("Prodi    : "))
        fakultas = str(input("Fakultas : "))
        
        # masukkan nilai atribut
        arrMhs[m].append(arrMhs(nama, nim, prodi, fakultas))
    
    # mengedit data
    elif (pilih == 2):
        print("\n== Edit Data ==\n")
        
        # pilih baris yg akan diedit
        baris = int(input("Edit data baris ke : "))

        # ambil nilai semua atribut
        nama = str(input("Nama     : "))
        nim = int(input("Nim      : "))
        prodi = str(input("Prodi    : "))
        fakultas = str(input("Fakultas : "))
        
        # masukkan nilai atribut
        arrMhs[baris-1].append(Mahasiswa(nama, nim, prodi, fakultas))
    
    # menghapus data
    elif (pilih == 3):
        print("\n== Hapus Data ==\n")
        
        # pilih baris yang akan dihapus
        baris = int(input("Hapus data baris ke : "))
        
        # hapus data dengan memainkan indeks
        for i in range(m):
            arrMhs[i] = arrMhs[i + 1]
    
    # menampilkan data
    elif (pilih == 4):
        
        #inisialisasi
        hitung = 1
        print("\n== Isi Data ==\n")
        
        # tampilkan data
        for Mahasiswa in arrMhs:
            print("#Data ke-",hitung,)
            print("Nama     : ",Mahasiswa.getNama(),"\nNim      : ",Mahasiswa.getNim())
            print("Prodi    : ",Mahasiswa.getProdi(),"\nFakultas : ",Mahasiswa.getFakultas(),"\n") 
            
            # increment
            hitung = hitung+1

    