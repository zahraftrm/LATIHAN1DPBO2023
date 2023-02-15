<?php
    include "Mahasiswa.php";
    
    // welcome!
    echo ("<h4>===== Selamat Datang di Database Mahasiswa =====</h4>");
    echo '<hr>';
    
    // banyaknya data. variabel n untuk maksimalnya. variabel m untuk yang diinginkan
    echo ("Isi Data : <br/><br/>");
    $n = 10; $m = 5;

    // membuat array of object dan mengisinya dengan nilai
    $arrMhs[0] = new Mahasiswa('Zahra Fitria', 2102545, 'Ilmu Komputer', 'FPMIPA');
    $arrMhs[1] = new Mahasiswa('Lili Saputri', 2102041, 'Biologi', 'FPMIPA');
    $arrMhs[2] = new Mahasiswa('Fajar Hustomi', 2102449, 'Kimia', 'FPMIPA');
    $arrMhs[3] = new Mahasiswa('Sari Husnul', 2102157, 'Sastra Inggris', 'FPBS');
    $arrMhs[4] = new Mahasiswa('Rasyel Khairunnisa', 2102342, 'Sastra Indonesia', 'FPBS');

    // perulangan untuk menampilkan data
    for($i = 0; $i < $m; $i++) {
        echo ("# Data ke-").$i + "1".".<br/>";
        echo ("Nama     : ").$arrMhs[$i]->getNama()."<br/>";
        echo ("Nim      : ").$arrMhs[$i]->getNim()."<br/>";
        echo ("Prodi    : ").$arrMhs[$i]->getProdi()."<br/>";
        echo ("Fakultas : ").$arrMhs[$i]->getFakultas()."<br/><br/>";
    }
