#include "singlelinklist.h"


int main() {
	list L;
	CreateList(L);
	
	mahasiswa x;
	
	x.nama = "Vento";
	x.nim = "123";
	x.ipk = 3.40;
	
	address P = alokasi(x);
	insertFirst(L,P);
	tampilkan(L);
}
