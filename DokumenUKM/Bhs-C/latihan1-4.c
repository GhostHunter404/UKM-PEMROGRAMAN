#include<stdio.h>

struct buku {
	char *judul ;
	int tebalHalaman;
};
void main (){
	struct buku buku1 ;
	
	buku1.judul = "The Fabulous Udin";
	buku1.tebalHalaman = 200 ;
	
	printf("judul buku : %s \n" ,buku1.judul);
	printf("tebal halaman : %i \n" ,buku1.tebalHalaman);
	
}