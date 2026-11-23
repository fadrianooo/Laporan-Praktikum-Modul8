#ifndef QUEUE_H_INCLUDE
#define QUEUE_H_INCLUDE

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef bool boolean;

typedef struct elmQ *address;

struct elmQ {
    infotype info;
    address next;
};

/* Deklarasi tipe data queue */
struct queue {
    address head;
    address tail;
};

/********* Pengecekan apakah queue kosong *********/
boolean isEmpty(queue Q);
/* Mengembalikan true jika queue kosong */

/********* Pembuatan queue kosong *********/
void CreateQueue(queue &Q);
/* I.S. sembarang
   F.S. terbentuk queue kosong */

/********* Manajemen memori *********/
address alokasi(infotype X);
/* Mengirimkan address hasil alokasi elemen.
   Jika berhasil, mengembalikan address baru.
   Jika gagal, mengembalikan Nil */

void dealokasi(address P);
/* I.S. P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

/********* Pencarian elemen *********/
address findElm(queue Q, infotype X);
/* Mencari elemen dengan info = X.
   Jika ditemukan mengembalikan address elemen,
   jika tidak mengembalikan Nil */

boolean fFindElm(queue Q, address P);
/* Mencari apakah elemen dengan alamat P ada dalam queue.
   Mengembalikan true jika ada, false jika tidak */

/********* Penambahan elemen *********/
void insert(queue &Q, address P);
/* I.S. P sudah dialokasikan
   F.S. P ditambahkan pada akhir queue */

/********* Penghapusan elemen *********/
void deleteQueue(queue &Q, address &P);
/* I.S. queue tidak kosong
   F.S. P menunjuk elemen pertama queue,
        head berpindah ke elemen berikutnya.
        Queue mungkin menjadi kosong */

/********* Proses semua elemen queue *********/
void printInfo(queue Q);
/* Menampilkan seluruh isi queue */

int nbList(queue Q);
/* Mengembalikan jumlah elemen queue */

void delAll(queue &Q);
/* Menghapus seluruh elemen queue dan dealokasi memori */

#endif