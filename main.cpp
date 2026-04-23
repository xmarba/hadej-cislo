//
//  main.cpp
//  supergame
//
//  Created by marba on 16.04.2026.
//

#include <iostream>
#include <random>
using namespace std;
//* Tým 1 ***************************************************************************
/**
 Tato funkce vypise na obrazovku uvodní informace o hre, ve ktere bude hrac hadat cislo od 1 do 1000.
 Vypiste nazev i pravidla hry do nejakeho pekneho ramecku.
 */
void uvodniObrazovka()
{
    
}
//* Tým 2 ***************************************************************************
/**
    Tato funkce vypise hlaseni o ukonceni hry do nejakeho pekneho ramecku a pak pocka na stisk klevesy Enter.
 */
void koncovaObrazovka()
{
    
}
//* Tým 3 ***************************************************************************
/**
 Pokud je cisloCloveka vetsi nez cisloPocitace, pak napise na obrazovku "Moje cislo je mensi".
 Pokud je cisloCloveka mensi nez cisloPocitace, pak napise na obrazovku "Moje cislo je vetsi".
 Jinak napise na obrazovku "Trefa!".
  */
void napisOdpovedPocitace(int cisloCloveka, int cisloPocitace)
{
    if (cisloCloveka > cisloPocitace)
    {
        cout << "Moje cislo je mensi." << endl;
    }
    else if (cisloCloveka < cisloPocitace)
    {
        cout << "Moje cislo je vetsi." << endl;
    }
    else
    {
        cout << "Trefa!" << endl;
    }
}
//* Tým 4 ***************************************************************************
/**
    Funkce vrati nahodne cele cislo v rozsahu <odkud, kam>.
 */
int vymysliNahodneCislo(int odkud, int kam)
{
     int cisloCloveka, cisloPocitace;
    uvodniObrazovka();
    cisloPocitace = vymysliNahodneCislo(1,1000);
    do{
        cisloCloveka=nactiCisloCloveka();
        napisOdpovedPocitace(cisloCloveka, cisloPocitace);
    }while(hraNekonci(cisloCloveka, cisloPocitace));

    koncovaObrazovka();
    return 0; 
}
//* Tým 5 ***************************************************************************
/**
 Vyzve cloveka k zadani celeho cisla na klavesnici. Toto cele cislo pak funkce vrati jako svuj vysledek.
 */
int nactiCisloCloveka()
{
    int result = 0;
    bool ok = true;
    do {
        ok = true;
        string input;
        cout << "Zadej číslo: ";
        cin >> input;
        result = 0;
        int i = 0;
        for (char c : input) {
            if (c >= '0' && c <= '9') {
                result = 10 * result + c - '0';
            }
            else {
                ok = false;
                cout << "'" << input << "' není číslo!\n ";
                for (int j = 0; j < i; ++j) {
                    cout << ' ';
                }
                cout << "^\n";
                break;
            }
            ++ i;
        }
    } while(!ok);
    return result;
}
//* Tým 6 ***************************************************************************
/**
 Pokud se hodnoty cisloCloveka a cisloPocitace rovnaji, pak vraci false.
 Jinak vraci true.
 */
bool hraNekonci(int cisloCloveka, int cisloPocitace)
{
    
}
//****************************************************************************
int main() {
    int cisloCloveka, cisloPocitace;
    uvodniObrazovka();
    cisloPocitace = vymysliNahodneCislo(1,1000);
    do{
        cisloCloveka=nactiCisloCloveka();
        napisOdpovedPocitace(cisloCloveka, cisloPocitace);
    }while(hraNekonci(cisloCloveka, cisloPocitace));
    
    koncovaObrazovka();
    return 0;
}
