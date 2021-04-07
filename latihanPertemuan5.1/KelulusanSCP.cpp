#include <iostream.h>
#include <conio.h>

void main()
{
    int ujian1, ujian2, rt;
    char ket[50] = "";

    cout<<"Masukkan nilai Ujian 1: "; cin>>ujian1;
    cout<<"Masukkan nilai Ujian 2: "; cin>>ujian2;

    rt = (ujian1+ujian2)/2;

	 if(ujian1 > 100) {
      strcpy(ket,"Nilai ujian 1 tidak boleh lebih dari 100");
    }
    else if(ujian1 < 0){
     strcpy(ket,"Nilai ujian 1 tidak boleh kurang dari 0");
    }
	 else if(ujian2 > 100) {
      strcpy(ket,"Nilai ujian 2 tidak boleh lebih dari 100");
    }
    else if(ujian2 < 0){
     strcpy(ket,"Nilai ujian 2 tidak boleh kurang dari 0");
    }
    else if(ujian1 >= 85) {
	     if(ujian2 >=85){
            strcpy(ket,"Lulus Seleksi Pegawai karena kedua nilai minimal 85");
           }
        else if(rt >= 90){
				strcpy(ket,"Lulus Seleksi Pegawai dengan rata-rata nilai >= 90");
        		}
        else {
        		strcpy(ket,"Tidak memenuhi syarat 1");
        }}
    else if(ujian1 < 85) {
        if(rt >= 90){
            strcpy(ket,"Lulus Seleksi Pegawai dengan rata-rata nilai 90");
           }
        else {
        		strcpy(ket,"Tidak memenuhi syarat 2");
        }}
    else {
           strcpy(ket,"Tidak memenuhi syarat 3");
        }
    cout<<"Keterangan: "<<ket<<endl;
    cout<<"Rata-rata: "<< rt << " | " << ujian1 << " + " << ujian2 << " = " << (ujian1+ujian2) <<endl;
    getch();
}