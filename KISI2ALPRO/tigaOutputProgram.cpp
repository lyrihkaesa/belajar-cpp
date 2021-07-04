#include <conio.h> // getch()
#include <iostream.h> // cout, cin

int a = 5, b;

void satu(){
    b = b + a;
    cout << "Nilai B yang tercetak = " << b << endl;
}

int dua(int x, int y = 0){
    x *= 2;
    if(x <= y && (x%2 < 1))
        a = a + b + x;
    else
        a = b + a + y;
    satu();
    return(a+b);
}

void main(){
    int c;
    cout << "Input Nilai x = "; cin >> c;
    dua(c);
    getch();
}