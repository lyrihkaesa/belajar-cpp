#include <iostream.h>
#include <conio.h>

void main()
{
    int nilai;
    char ket[38] = "Input Anda Bukan Angka dari 0 s.d 100";

    cout<<"Masukkan nilai: ";
    cin>>nilai;

    if(nilai >= 85 && nilai <= 100) {
	   	strcpy(ket,"A");
        }
        else if(nilai >= 70 && nilai <85) {
        strcpy(ket,"B");
        }
        else if(nilai >= 60 && nilai <70) {
        strcpy(ket,"C");
        }
        else if(nilai >= 50 && nilai <60) {
        strcpy(ket,"D");
        }
        else if(nilai >= 0 && nilai <50) {
        strcpy(ket,"E");
        }
    cout<<"Nilai: "<<ket<<endl;
    getch();
}