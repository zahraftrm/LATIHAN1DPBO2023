# membuat kelas mahasiswa
class Mahasiswa:
    # konstruktor dengan parameter
    def __init__(self, nama, nim, prodi, fakultas):
        self.nama = nama
        self.nim = nim
        self.prodi = prodi
        self.fakultas = fakultas

    # tetapkan nama
    def setNama(self, nama):
        self.nama = nama

    # get nama
    def getNama(self):
        return self.nama
    
    # tetapkan nim
    def setNim(self, nim):
        self.nim = nim
    
    # get nama
    def getNim(self):
        return self.nim
    
    # tetapkan prodi
    def setProdi(self, prodi):
        self.prodi = prodi

    # get nama
    def getProdi(self):
        return self.prodi
    
    # tetapkan fakultas
    def setFakultas(self, fakultas):
        self.fakultas = fakultas
    
    # get nama
    def getFakultas(self):
        return self.fakultas
    
    # tampilkan data
    def tampilkan(self):
        print(self.nama + "\n")
        print(self.nim + "\n")
        print(self.prodi + "\n")
        print(self.fakultas + "\n")
