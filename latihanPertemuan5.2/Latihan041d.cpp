#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

int main()
{
    char nama[20];
    char bagian[20];
    int anak, tunjangan;

    int brs=4, klm=18, klmi=33;

    gotoxy(klm, brs++); cout << "Hitung Tunjangan Anak";
    gotoxy(klm, brs++); cout << "====================================";
    gotoxy(klm, brs++); cout << "1. Nama      : ";
    gotoxy(klm, brs++); cout << "2. Bagian    : ";
    gotoxy(klm, brs++); cout << "3. Jml Anak  : ";
    gotoxy(klm, brs++); cout << "   Tunjangan : ";

    brs=6, klm=33;
    gotoxy(klm, brs++); gets(nama);
    gotoxy(klm, brs++); cin >> bagian;
    gotoxy(klm, brs++); cin >> anak;

    if (anak>3)
        tunjangan = 3 * 100000;
    else
        tunjangan = anak * 100000;

    gotoxy(klmi, brs++); cout << tunjangan << endl;

    getch();
}