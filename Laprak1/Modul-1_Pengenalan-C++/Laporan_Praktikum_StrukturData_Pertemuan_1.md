# <h1 align="center">Laporan Praktikum Modul 1 <br> Pengenalan C++</h1>
<p align="center">Naufal Labib Asyidiq - 103112400108</p>

## Dasar Teori

yang panjang dikit

## Guided

### soal 1 Aritmatika

'''
#include <iostream>
using namespace std;
int main()
{
    int W, X, Y;
    float Z;
    X = 7;
    Y = 3;
    W = 1;
    Z = (X + Y) / (Y + W);
    cout << "Nilai z = " << Z << endl;
    return 0;
}
'''

Program C++ ini menghitung hasil operasi aritmatika sederhana. Variabel X, Y, dan W bertipe integer, sedangkan Z bertipe float. Setelah diberi nilai 7, 3, dan 1, program menghitung (X + Y) / (Y + W) atau 10 / 4. Karena pembagian dilakukan dengan integer, hasilnya 2, lalu disimpan ke Z dan ditampilkan sebagai “Nilai z = 2”. Jika ingin memperoleh hasil pecahan 2,5, maka salah satu operand harus dikonversi ke float.

### soal 2 Fungsi

'''
#include <iostream>
using namespace std;

// Prosedur: hanya menampilkan hasil, tidak mengembalikan nilai
void tampilkanHasil(double p, double l)
{
    cout << "\n=== Hasil Perhitungan ===" << endl;
    cout << "Panjang : " << p << endl;
    cout << "Lebar   : " << l << endl;
    cout << "Luas    : " << p * l << endl;
    cout << "Keliling: " << 2 * (p + l) << endl;
}

// Fungsi: mengembalikan nilai luas
double hitungLuas(double p, double l)
{
    return p * l;
}

// Fungsi: mengembalikan nilai keliling
double hitungKeliling(double p, double l)
{
    return 2 * (p + l);
}

int main()
{
    double panjang, lebar;

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar  : ";
    cin >> lebar;

    // Panggil fungsi
    double luas = hitungLuas(panjang, lebar);
    double keliling = hitungKeliling(panjang, lebar);

    cout << "\nDihitung dengan fungsi:" << endl;
    cout << "Luas      = " << luas << endl;
    cout << "Keliling  = " << keliling << endl;

    // Panggil prosedur
    tampilkanHasil(panjang, lebar);

    return 0;
}
'''

Program ini ditulis dalam bahasa C++ untuk menghitung luas dan keliling persegi panjang menggunakan fungsi dan prosedur. Pertama, terdapat fungsi hitungLuas() yang mengembalikan hasil perkalian panjang dan lebar, serta fungsi hitungKeliling() yang mengembalikan dua kali jumlah panjang dan lebar. Selain itu, terdapat prosedur tampilkanHasil() yang langsung mencetak panjang, lebar, luas, dan keliling tanpa mengembalikan nilai. Pada bagian main, pengguna diminta memasukkan nilai panjang dan lebar. Nilai tersebut kemudian dihitung dengan fungsi untuk mendapatkan luas dan keliling, lalu ditampilkan. Setelah itu, prosedur dipanggil untuk menampilkan hasil perhitungan dengan format yang lebih lengkap. Dengan demikian, program ini memperlihatkan perbedaan penggunaan fungsi yang mengembalikan nilai dan prosedur yang hanya menampilkan hasil.

### soal 3 Perkondisian

'''
#include <iostream>
using namespace std;
// int main()
// {
//     double tot_pembelian, diskon;
//     cout << "total pembelian: Rp";
//     cin >> tot_pembelian;
//     diskon = 0;
//     if (tot_pembelian >= 100000)
//         diskon = 0.05 * tot_pembelian;
//     cout << "besar diskon = Rp" << diskon;
// }



// int main()
// {
//     double tot_pembelian, diskon;
//     cout << "total pembelian: Rp";
//     cin >> tot_pembelian;
//     diskon = 0;
//     if (tot_pembelian >= 100000)
//         diskon = 0.05 * tot_pembelian;
//     else
//         diskon = 0;
//     cout << "besar diskon = Rp" << diskon;
// }



int main()
{
    int kode_hari;
    cout << "Menentukan hari kerja/libur\n"<<endl;
    cout << "1=Senin 3=Rabu 5=Jumat 7=Minggu "<<endl;
    cout << "2=Selasa 4=Kamis 6=Sabtu "<<endl;
    cin >> kode_hari;
    switch (kode_hari)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout<<"Hari Kerja";
        break;
    case 6:
    case 7:
        cout<<"Hari Libur";
        break;
    default:
        cout<<"Kode masukan salah!!!";
    }
    return 0;
}
'''

Program ini dibuat untuk latihan Menggunakan percabangan di C++. Bagian pertama (dikasih tanda komentar) dipakai untuk ngitung diskon belanja. jika total belanja Rp100.000 ke atas, dapat diskon 5%, kalau kurang berarti tidak ada diskon. Bagian ketiga (yang jalan) dipakai buat Menentukan hari kerja atau hari libur dari kode angka 1–7. Kalau masukin angka 1–5 hasilnya “Hari Kerja”, kalau 6 atau 7 jadi “Hari Libur”, dan kalau salah input muncul pesan error. Jadi program ini nunjukin cara pakai if–else sama switch–case buat masalah sehari-hari.

### soal 4 Perulangan

'''
#include <iostream>
using namespace std;
// int main()
// {
//     int jum;
//     cout << "jumlah perulangan: ";
//     cin >> jum;
//     for (int i = 0; i < jum; i++)
//     {
//         cout << "saya sahroni\n";
//     }
//     return 1;
// }


// while
int main()
{
    int i = 1;
    int jum;
    cin >> jum;
    do
    {
        cout << "bahlil ke-" << (i + 1) << endl;
        i++;
    } while (i < jum);
    return 0;
}
'''

Program ini berisi contoh penggunaan perulangan (looping) di C++. Pada bagian pertama (yang dikomentari) digunakan perulangan for. Program meminta input jumlah perulangan, lalu mencetak tulisan “saya sahroni” sebanyak jumlah yang diminta. Bagian kedua (yang dijalankan) menggunakan perulangan do–while. Program meminta input angka, lalu mencetak teks “bahlil ke-…” secara berulang sambil menambahkan nomor urut. Perulangan akan terus berjalan selama nilai i masih lebih kecil dari jumlah yang dimasukkan. Melalui program ini terlihat perbedaan antara for yang langsung tahu batas perulangan dari awal, dan do–while yang minimal dijalankan sekali walaupun syaratnya tidak langsung terpenuhi.

### soal 5 Struct

'''
#include <iostream>
#include <string>
using namespace std;

// Definisi struct
struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

int main() {

    Mahasiswa mhs1;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, mhs1.nama);
    // cin >> mhs1.nama;
    cout << "Masukkan NIM Mahasiswa : ";
    cin >> mhs1.nim;
    cout << "Masukkan IPK Mahasiswa : ";
    cin >> mhs1.ipk;

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "NIM  : " << mhs1.nim << endl;
    cout << "IPK  : " << mhs1.ipk << endl;

    return 0;
}
'''

Program ini adalah contoh penggunaan struct di C++. Pertama, dibuat sebuah struktur bernama Mahasiswa yang berisi tiga data: nama (tipe string), nim (tipe string), dan ipk (tipe float). Di dalam main(), dibuat variabel mhs1 bertipe Mahasiswa. Program kemudian meminta pengguna untuk memasukkan nama, NIM, dan IPK. Data tersebut disimpan ke dalam mhs1, lalu ditampilkan kembali dengan format yang rapi. Dengan cara ini, program memperlihatkan bagaimana struct bisa dipakai untuk mengelompokkan beberapa data yang saling berhubungan, misalnya data mahasiswa.

### soal 6 Test
'''
#include <iostream>
using namespace std;
int main()
{
    string ch;
    cout << "Masukkan sebuah karakter: ";
    // cin >> ch;
    ch = getchar();  //Menggunakan getchar() untuk membaca satu karakter
    cout << "Karakter yang Anda masukkan adalah: " << ch << endl;
    return 0;
}
'''

Program ini dibuat untuk menerima satu karakter dari pengguna lalu menampilkannya kembali. Pada awalnya, variabel ch dideklarasikan bertipe string, kemudian nilai dimasukkan dengan fungsi getchar(). Karena getchar() hanya membaca satu karakter, sebenarnya lebih cocok jika variabel tersebut menggunakan tipe char. Setelah pengguna mengetikkan karakter, program akan menuliskannya kembali ke layar dengan pesan “Karakter yang Anda masukkan adalah …”. Dengan begitu, program ini memperlihatkan cara sederhana membaca input berupa satu huruf dengan getchar().

## Unguided

### Soal 1

Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```go
package main

func main() {
	fmt.Println("Kode kalian disini")
	fmt.Println("JANGAN MASUKIN >>SCREENSHOT<< KODE KALIAN DISINI")
	fmt.Println("KALAU ADA -20 POIN LAPRAK")
}
```

> Output
> ![Screenshot bagian x](output/Nomor1.png)
> %% Untuk mencantumkan screenshot, tidak boleh ada spasi di urlnya `()`, penamaan file bebas asal gak sara dan mudah dipahami aja,, dan jangan lupa hapus komen ini yah%%

Penjelasan ttg kode kalian disini

### Soal 2

Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di- input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100

```go
package main

func main() {
	fmt.Println("kode untuk soal nomor 2A")
}
```

> Output
> ![Screenshot bagian x](output/Nomor2.png)

penjelasan kode

Kalau adalanjutan di lanjut disini aja


### Soal 3
Buatlah program yang dapat memberikan input dan output sbb.

input : 3
output : 3 2 1 * 1 2 3
		   2 1 * 1 2
		     1 * 1
			   *

```go
package main

func main() {
	fmt.Println("kode untuk soal nomor 2B")
}
```

> Output
> ![Screenshot bagian x](output/Nomor3.png)

penjelasan bedanya sesuai soal

## Referensi

1. https://en.wikipedia.org/wiki/Data_structure (diakses blablabla)
