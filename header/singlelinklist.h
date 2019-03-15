#ifndef SINGLELINKLIST_H_INCLUDED
#define SINGLELINKLIST_H_INCLUDED

#define Nil NULL
#define first(L) ((L).first)
#define next(P) (P)->next
#define info(P) (P)->info

using namespace std;
#include <iostream>

struct mahasiswa{
	string nama;
	string nim;
	float ipk;
};

typedef mahasiswa infotype;
typedef struct elmlist *address;

struct elmlist{
	infotype info;
	address next;
};

struct list{
	address first;
};


void CreateList(list &L);
address alokasi(infotpe x);
void insertFirst(list &L, address P);
void insertLast(list &L, address P);
void insertAfter(list &L, address P);
void deleteFirst(list &L, address &P);
void deleteLast(list &L, address &P);
void deleteAfter(list &L, address &P);
void sortbyIPK(list &L);
void sortbyNama(list &L);
void tampilkan(list L);


#endif // SINGLELINKLIST_H_INCLUDED
