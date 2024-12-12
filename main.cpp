﻿/**
 * @file zaawansowane4.cpp
 * @brief Program demonstracyjny dla klasy matrix.
 */

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include "class.h"
using namespace std;

/**
 * @brief Funkcja główna programu.
 * @return Kod zakończenia programu.
 */
int main()
{
    int* tablica = new int[9];
    tablica[0] = 1;
    tablica[1] = 2;
    tablica[2] = 3;
    tablica[3] = 4;
    tablica[4] = 5;
    tablica[5] = 6;
    tablica[6] = 7;
    tablica[7] = 8;
    tablica[8] = 9;

    matrix m1;
    matrix m2(3);
    matrix m3(3, tablica);
    matrix m6(3, tablica);
    matrix m7(3, tablica);

    m1.alokuj(3);
    m2.alokuj(2);
    m1.wstaw(2, 1, 45);
    cout << "Metodu wstaw i pokaz:" << endl;
    cout << m1.pokaz(2, 1) << endl;

    cout << "Macierz m3 przed zmianami:" << endl;
    cout << m3;
    cout << endl;

    m3.odwroc();
    cout << "Macierz m3 po metodzie odwroc:" << endl;
    cout << m3;
    cout << endl;

    matrix m4(6);
    m4.losuj();
    cout << "Metoda losuj:" << endl;
    cout << m4;
    cout << endl;

    cout << "Metoda losuj(5):" << endl;
    m4.losuj(5);
    cout << m4;
    cout << endl;

    matrix m5(6);
    m5.diagonalna(tablica);
    cout << "Metoda diagonal:" << endl;
    cout << m5;
    cout << endl;

    m5.diagonalna_k(2, tablica);
    cout << "Metoda diagonalna_k dodatnia:" << endl;
    cout << m5;
    cout << endl;

    m5.diagonalna_k(-2, tablica);
    cout << "Metoda diagonalna_k ujemna:" << endl;
    cout << m5;
    cout << endl;

    m6.kolumna(1, tablica);
    cout << "Metoda kolumna:" << endl;
    cout << m6;
    cout << endl;

    m7.wiersz(2, tablica);
    cout << "Metoda wiersz:" << endl;
    cout << m7;
    cout << endl;

    matrix m8(6);
    m8.przekatna();
    cout << "Metoda przekatna:" << endl;
    cout << m8;
    cout << endl;

    m8.pod_przekatna();
    cout << "Metoda pod_przekatna:" << endl;
    cout << m8;
    cout << endl;

    m8.nad_przekatna();
    cout << "Metoda nad_przekatna:" << endl;
    cout << m8;
    cout << endl;

    m8.szachownica();
    cout << "Metoda szachownica:" << endl;
    cout << m8;
    cout << endl;

    matrix m9(m6);
    matrix m10(m7);
    matrix m11(4, tablica);

    m6 + m7;
    cout << "Metoda m6+m7:" << endl;
    cout << m6;
    cout << endl;

    cout << "Metoda m9*m11:" << endl;
    m9* m11;
    cout << m9;
    cout << endl;

    m7 + 5;
    cout << "Metoda m7+5:" << endl;
    cout << m7;
    cout << endl;

    m10 * 5;
    cout << "Metoda m10*5:" << endl;
    cout << m10;
    cout << endl;

    5 + m7;
    cout << "Metoda 5+m7:" << endl;
    cout << m7;
    cout << endl;

    5 * m10;
    cout << "Metoda 5*m10:" << endl;
    cout << m10;
    cout << endl;

    10 - m7;
    cout << "Metoda 10-m7:" << endl;
    cout << m7;
    cout << endl;

    m10++;
    cout << "Metoda m10++:" << endl;
    cout << m10;
    cout << endl;

    m10--;
    cout << "Metoda m10--:" << endl;
    cout << m10;
    cout << endl;

    m10 += 2;
    cout << "Metoda m10+=2:" << endl;
    cout << m10;
    cout << endl;

    m10 -= 2;
    cout << "Metoda m10-=2:" << endl;
    cout << m10;
    cout << endl;

    m10 *= 2;
    cout << "Metoda m10*=2:" << endl;
    cout << m10;
    cout << endl;

    m10(5.5);
    cout << "Metoda m10(5.5):" << endl;
    cout << m10;
    cout << endl;

    string name1;
    if (m9 == m10)
    {
        name1 = "true";
    }
    else
    {
        name1 = "false";
    }
    string name2;
    if (m9 > m10)
    {
        name2 = "true";
    }
    else
    {
        name2 = "false";
    }
    string name3;
    if (m9 < m10)
    {
        name3 = "true";
    }
    else
    {
        name3 = "false";
    }
    cout << "Metoda m9==m10: " << name1 << endl;
    cout << "Metoda m9>m10: " << name2 << endl;
    cout << "Metoda m9<m10: " << name3 << endl;

    delete[] tablica;
    return 0;
}
