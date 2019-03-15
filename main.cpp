#include "singlelinklist.h"


int main() {
	list L;
	CreateList(L);
	
	mahasiswa x;
	cout << "MENAMBAH 5 DATA MAHASISWA" << endl;
	x.nama = "Ahmad Subarjo";
	x.nim = "130318728";
	x.ipk = 3.57;
	address P = alokasi(x);
	insertFirst(L,P);
	
	x.nama = "Sukarni";
	x.nim = "130318764";
	x.ipk = 3.60;
	P = alokasi(x);
	insertLast(L,P);
	
	x.nama = "Goerge Subejo";
	x.nim = "130318746";
	x.ipk = 3.87;
	P = alokasi(x);
	insertLast(L,P);
	
	x.nama = "Malik Alamudin";
	x.nim = "130319876";
	x.ipk = 3.01;
	P = alokasi(x);
	insertLast(L,P);
	
	x.nama = "Zainudin Armain";
	x.nim = "130318793";
	x.ipk = 3.32;
	P = alokasi(x);
	insertLast(L,P);
	
	tampilkan(L);
	
	cout << endl;
	cout << "FIRST DAN LAST DIBALIK DATANYA" << endl;
	
	address Q = NULL;
	deleteFirst(L,P);
	deleteLast(L,Q);
	insertLast(L,P);
	insertFirst(L,Q);
	
	tampilkan(L);
	
	
}
