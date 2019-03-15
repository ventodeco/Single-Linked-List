#ifndef SINGLELINKLIST_H_INCLUDED
#define SINGLELINKLIST_H_INCLUDED

using namespace std;
#include <iostream>

#define Nil NULL
#define next(P) (P)->next
#define info(P) (P)->info
#define first(L) ((L).first)


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
bool isEmpty(list L);
address alokasi(infotype x);
void insertFirst(list &L, address P);
void insertLast(list &L, address P);
void deleteFirst(list &L, address &P);
void deleteLast(list &L, address &P);
void tampilkan(list L);


#endif // SINGLELINKLIST_H_INCLUDED
