<?php

// membuat kelas mahasiswa
class Mahasiswa {
    // atribut yang diperlukan
    private $nama = '';
    private $nim = 0;
    private $prodi = '';
    private $fakultas = '';

    // konstruktor dengan parameter
    public function __construct($nama, $nim, $prodi, $fakultas) {
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }

    // tetapkan nama
    public function setNama($nama) {
        $this->nama = $nama;
    }

    // get nama
    public function getNama() {
        return $this->nama;
    }

    // tetapkan nim
    public function setNim($nim) {
        $this->nim = $nim;
    }

    // get nim
    public function getNim() {
        return $this->nim;
    }

    // tetapkan prodi
    public function setProdi($prodi) {
        $this->prodi = $prodi;
    }

    // get prodi
    public function getProdi() {
        return $this->prodi;
    }

    // tetapkan fakultas
    public function setFakultas($fakultas) {
        $this->fakultas = $fakultas;
    }

    // get fakultas
    public function getFakultas() {
        return $this->fakultas;
    }

    // menampilkan data
    public function tampilkan() {
        echo $nama;
        echo $nim;
        echo $prodi;
        echo $fakultas;
    }

    // deconstruct
    function __destruct() {

    }
}
?>
