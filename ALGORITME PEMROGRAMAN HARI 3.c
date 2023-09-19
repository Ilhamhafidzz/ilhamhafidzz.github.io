#include<stdio.h>

void main(){
	char nama[50],nim[50],kelas[50],alamat[50],asalsekolah[50];
	printf ("masukkan nama");
	gets (nama);
	printf ("masukkan nim");
	gets (nim);
	printf ("masukkan kelas");
	gets (kelas);
	printf ("masukkan alamat");
	gets (alamat);
	printf ("masukkan asalsekolah");
	gets (asalsekolah);
	printf ("nama saya %s \n",nama);
	printf ("nim saya %s \n",nim);
	printf ("kelas saya %s \n",kelas);
	printf ("alamat saya %s \n",alamat);
	printf ("asal sekolah saya %s \n",asalsekolah);
}