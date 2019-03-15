#include "singlelinklist.h"

void CreateList(list &L){
	first(L) = NULL;
}

bool isEmpty(list L){
	if (first(L) = NULL){
		return true;
	} else{
		return false;
	}
}

address alokasi(infotype x){
	address P = new elmlist;
	info(P).nama = x.nama;
	info(P).nim = x.nim;
	info(P).ipk = x.ipk;
	next(P) = NULL;
	
	return P;
};

void insertFirst(list &L, address P){
	if(isEmpty(L)){
		first(L) = P;
	} else{
		next(P) = first(L);
		first(L) = P;
	}
}

void insertLast(list &L, address P){
	if(isEmpty(L)){
		first(L) = P;
	} else{
		address Q = first(L);
		while(next(Q) != NULL){
			Q = next(Q);
		}
		next(Q) = P;
	}
}

void insertAfter(list &L, address P){
	
}

void deleteFirst(list &L, address &P){
	
}

void deleteLast(list &L, address &P);
void deleteAfter(list &L, address &P);
void sortbyIPK(list &L);
void sortbyNama(list &L);
void tampilkan(list L){
	if(isEmpty(L)){
		cout << "List Telah Kosong" << endl;
	} else{
		address P = first(L);
		while(P != NULL){
			cout << "Nama  : " << info(P).nama << endl;
			cout << "NIM   : " << info(P).nim << endl;
			cout << "IPK   : " << info(P).ipk << endl;
			P = next(P);
		}
	}
}
