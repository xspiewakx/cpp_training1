/*
	22 paŸdziernik 2014
	
	1. Podaj numer tygodnia - zwraca nazwê
	2. Podaj numer tygodnia - zwraca roboczy/weekend
	3. Sprawdza parzystosc do n liczby
	4. Wyswietla tabliczke mnozenia do 10
	5. Wyswietla kwadrat o dlugosci n
*/
#include <iostream>
 
using namespace std;
 
int dnitygodnia() {
        cout<<"*** DNI TYGODNIA *** \n* Wpisz numer tygodnia: ";
        int a;
        cin>>a;
        switch(a){
                default: cout<<"Dzis mamy dzien zaglady."; break;
                case 0: return 0; break;
                case 1: cout<<"Dzis mamy poniedzialek."; break;
                case 2: cout<<"Dzis mamy wtorek."; break;
                case 3: cout<<"Dzis mamy srode."; break;
                case 4: cout<<"Dzis mamy czwartek."; break;
                case 5: cout<<"Dzis mamy piatek."; break;
                case 6: cout<<"Dzis mamy sobote."; break;
                case 7: cout<<"Dzis mamy niedziele."; break;
        }
        cout<<"\n*** KONIEC PROGRAMU *** \n\n";
        return 0;
}
 
int roboczyweekend() {
        cout<<"*** DNI TYGODNIA *** \n* Wpisz numer tygodnia: ";
        int a;
        cin>>a;
        switch(a){
                default: cout<<"Dzis mamy dzien zaglady."; break;
                case 0: return 0; break;
                case 1 ... 5: cout<<"Dzis mamy dzien roboczy."; break;
                case 6 ... 7: cout<<"Dzis mamy weekend, ziooom."; break;
        }
        cout<<"\n*** KONIEC PROGRAMU *** \n\n";
        return 0;
}
 
int parzyste() {
        cout<<"Licz funkcje do liczby: ";
        int i, x;
        cin>>x;
        for(i=0; i<x+1; i++) {
                if(i%2 == 0) cout<<i<<" - PARZYSTA"<<endl;
                else cout<<i<<" - NIEPARZYSTA"<<endl;
        };
        return 0;
}
 
int tabliczka() {
        int i,x;
        for(x=1; x<10; x++) {
                for(i=1; i<10; i++) {
                        cout<<"| "<<i*x<<" |";
                };
                cout<<endl;
        };
        return 0;
}
 
int tabliczka2() {
        cout<<"Podaj wymiar boku kwadratu: ";
        int a;
        cin>>a;
        int i,x;
        for(x=0; x<a; x++) {
                for(i=0; i<a; i++) {
                        cout<<"* ";
                };
                cout<<endl;
        };
        return 0;
}
 
int main() {
        cout<<"*** MENU *** \n* 1. Dni tygodnia\n* 2. Roboczy/weekend\n* 3. Parzystosc\n* 4. Tabliczka mnozenia\n* 5. Kwadrat\n* Podaj wybrana opcje: ";
        int a;
        cin>>a;
        switch(a){
                default: cout<<"Wystapil blad.\n\n"; main(); break;
                case 0: return 0; break;
                case 1: cout<<"Wybrano opcje 1.\n\n"; dnitygodnia(); break;
                case 2: cout<<"Wybrano opcje 2.\n\n"; roboczyweekend(); break;
                case 3: cout<<"Wybrano opcje 3.\n\n"; parzyste(); break;\
                case 4: cout<<"Wybrano opcje 4.\n\n"; tabliczka(); break;
                case 5: cout<<"Wybrano opcje 5.\n\n"; tabliczka2(); break;
        }
}
