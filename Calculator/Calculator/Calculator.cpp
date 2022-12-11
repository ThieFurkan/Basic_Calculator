#include"Islemler.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << "*-*-*-*-*-*-*-*-*-*-*HESAP MAKINESI*-*-*-*-*-*-*-*-" << endl;
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    int Islemler[4] = { 1,2,3,4 };
    cout << "Toplama icin 1" << endl;
    cout << "Cikarma icin 2" << endl;
    cout << "Bolme icin 3" << endl;
    cout << "Carpma icİn 4" << endl;
    loop:
    int secenek;
    cout << "Isleminiz = ";
    cin >> secenek;
    if (secenek > 4)
    {
        cout << "Lutfen Gecerli Bir Sayi Giriniz "<<endl;
        goto loop;
    }
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << "Islem Yapmak Istediginiz Sayilari Giriniz\n" << endl; 
    {
        double sayi1 , sayi2 ;
        cout << "=";
        cin >> sayi1;
        cout << "=";
        cin >> sayi2;
        if (secenek == 1)
            toplama(sayi1, sayi2);
        else if (secenek == 2)
            cikarma(sayi1, sayi2);
        else if (secenek == 3)
            carpma(sayi1, sayi2);
        else (secenek == 4);
            bolme(sayi1, sayi2);
    }
}

