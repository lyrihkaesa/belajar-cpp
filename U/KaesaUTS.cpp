#include <iostream.h>
#include <stdio.h>
#include <conio.h>

char no_plg[1][8], nama[10][30], lagi[1], ket[10][20];
int krt[10], a = 1;
double td[10], jp[10], tp[10], jb[10], gta, gtb, gtc;

void main()
{
    // Masukan Data.........................................
    int brsa = 2, klma = 10;
    do {
        clrscr();
        gotoxy(klma, brsa); cout<<"TAGIHAN PERUSAHAAN AIR MINUM";
        gotoxy(klma, (brsa+1)); cout<<"============================";
        gotoxy(klma, (brsa+3)); cout<<"Data ke- : "<<a<<endl;
        gotoxy(klma, (brsa+4)); cout<<"1. Nomor Pelanggan       : "; gets(no_plg[a]);
        gotoxy(klma, (brsa+5)); cout<<"2. Nama Pelanggan        : "; gets(nama[a]);
        do
        {   
            gotoxy((klma+27), (brsa+6)); cout<<"        ";
            gotoxy(klma, (brsa+6)); cout<<"3. Kriteria [1..5]       : "; cin>>krt[a];
            if (krt[a] == 1) {
                gotoxy((klma+35), (brsa+6)); cout<<"                               ";
                strcpy (ket[a],"Rumah Tangga");
                td[a] = 4000;
            }
            else if (krt[a] == 2) {
                gotoxy((klma+35), (brsa+6)); cout<<"                               ";
                strcpy (ket[a],"Industri");
                td[a] = 15000;
            }
            else if (krt[a] == 3) {
                gotoxy((klma+35), (brsa+6)); cout<<"                               ";
                strcpy (ket[a],"Instansi Pemerintah");
                td[a] = 1000;
            }
            else if (krt[a] == 4) {
                gotoxy((klma+35), (brsa+6)); cout<<"                               ";
                strcpy (ket[a],"Lembaga Sosial");
                td[a] = 500;
            }
            else if (krt[a] == 5) {
                gotoxy((klma+35), (brsa+6)); cout<<"                               ";
                strcpy (ket[a],"Warung Air");
                td[a] = 10000;
            }
            else {
                // strcpy (ket[a],"Salah Memasukan Kriteria");
                gotoxy((klma+35), (brsa+6)); cout<<"Ket : Salah memasukan Kriteria";
            }
        gotoxy((klma+35), (brsa+6)); cout<<"Ket : "<<ket[a];
        } while (krt[a] > 5 || krt[a] < 1);
        gotoxy(klma, (brsa+7)); cout<<"4. Tarif Dasar           : "<<td[a];
        gotoxy(klma, (brsa+8)); cout<<"5. Jumlah Pemakaian      : "; cin>>jp[a]; 
        gotoxy((klma+30), (brsa+8)); cout<<" M3";
        if (jp[a] <= 60) {
            tp[a] = jp[a] * 200;
        }
        else if (jp[a] > 100) {
            tp[a] = jp[a] * 225;
        }
        else if (jp[a] > 60 || jp[a] <= 100) {
            tp[a] = jp[a] * 215;
        }
        gotoxy(klma, (brsa+9)); cout<<"6. Tarif Pemakaian       : "; cout<<tp[a];
        jb[a] = td[a] + tp[a];
        gotoxy(klma, (brsa+10)); cout<<"7. Jumlah Bayar          : "; cout<<jb[a];

        gotoxy((klma+10), (brsa+12));cout<<"Input Data Lagi [y/t] : "; cin>>lagi;
        a++;
    } while (strcmp("y", lagi) == 0 || strcmp("Y", lagi) == 0);

    int len = a, brs = 3, klm = 0;
    // Cetak Data.................................
    clrscr();
    char div[200] = "\n------------------------------------------------------------------------------------------------------------";
    gotoxy((klm+40), brs); cout<<"DAFTAR TAGIHAN PERUSAHAAN AIR MINUM\n";
    gotoxy(klm, (brs+3)); cout<<div<<endl;
    gotoxy(klm, (brs+4)); cout<<"No No.plg     Nama                           Kriteria            T.Dasar     Jml.Pakai  Trf.Pakai  Bayar     ";
    gotoxy(klm, (brs+6)); cout<<div;
    brs = brs + 5;
    for (int pss = 1; pss < len; pss++)
    {
        gotoxy((klm+1), brs); cout<<pss;
        gotoxy((klm+4), brs); cout<<no_plg[pss];
        gotoxy((klm+15), brs); cout<<nama[pss];
        gotoxy((klm+46), brs); cout<<ket[pss];
        gotoxy((klm+67), brs); cout<<td[pss];
        gotoxy((klm+78), brs); cout<<jp[pss];
        gotoxy((klm+89), brs); cout<<tp[pss];
        gotoxy((klm+100), brs); cout<<jb[pss];
        gta = gta + jp[pss];
        gtb = gtb + tp[pss];
        gtc = gtc + jb[pss];
        brs++;
    }
    gotoxy(klm, brs); cout<<div;
    klm = klm + 60;
    brs++;
    gotoxy(klm, brs); cout<<"Grand Total";
    gotoxy((klm+18), brs); cout<<gta;
    gotoxy((klm+29), brs); cout<<gtb;
    gotoxy((klm+40), brs); cout<<gtc;
    cout<<"\n\nProgram ini dibuat oleh Kukuh Setya Arumansyah | A12.2020.06495";
    getch();
}