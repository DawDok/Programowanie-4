#pragma once 
#include <iostream>
#include <ostream>
using namespace std;

/**
 * @class matrix
 * @brief Klasa reprezentuj?ca macierz kwadratow?.
 */
class matrix {
private:
    int* dlug; ///< Wska?nik na d?ugo?? macierzy.
    int** mac; ///< Wska?nik na tablic? wska?ników reprezentuj?cych macierz.

public:
    /**
     * @brief Konstruktor domy?lny klasy matrix.
     */
    matrix(void);

    /**
     * @brief Konstruktor klasy matrix, który alokuje macierz o rozmiarze n x n.
     * @param n Rozmiar macierzy.
     */
    matrix(int n);

    /**
     * @brief Konstruktor klasy matrix, który alokuje macierz o rozmiarze n x n i wype?nia j? warto?ciami z tablicy t.
     * @param n Rozmiar macierzy.
     * @param t Tablica warto?ci do wype?nienia macierzy.
     */
    matrix(int n, int* t);

    /**
     * @brief Konstruktor kopiuj?cy klasy matrix.
     * @param m Obiekt matrix, który ma zosta? skopiowany.
     */
    matrix(matrix& m);

    /**
     * @brief Destruktor klasy matrix.
     */
    ~matrix(void);

    /**
     * @brief Alokuje pami?? dla macierzy o rozmiarze n x n.
     * @param n Rozmiar macierzy.
     * @return Referencja do obiektu matrix.
     */
    matrix& alokuj(int n);

    /**
     * @brief Wstawia warto?? do macierzy w okre?lonej pozycji.
     * @param x Wiersz.
     * @param y Kolumna.
     * @param wartosc Warto?? do wstawienia.
     * @return Referencja do obiektu matrix.
     */
    matrix& wstaw(int x, int y, int wartosc);

    /**
     * @brief Zwraca warto?? z macierzy z okre?lonej pozycji.
     * @param x Wiersz.
     * @param y Kolumna.
     * @return Warto?? z macierzy.
     */
    int pokaz(int x, int y);

    /**
     * @brief Odwraca macierz (transpozycja).
     * @return Referencja do obiektu matrix.
     */
    matrix& odwroc(void);

    /**
     * @brief Wype?nia macierz losowymi warto?ciami.
     * @return Referencja do obiektu matrix.
     */
    matrix& losuj(void);

    /**
     * @brief Wype?nia macierz losowymi warto?ciami w okre?lonej liczbie komórek.
     * @param x Liczba komórek do wype?nienia.
     * @return Referencja do obiektu matrix.
     */
    matrix& losuj(int x);

    /**
     * @brief Ustawia warto?ci na przek?tnej macierzy.
     * @param t Tablica warto?ci do ustawienia na przek?tnej.
     * @return Referencja do obiektu matrix.
     */
    matrix& diagonalna(int* t);

    /**
     * @brief Ustawia warto?ci na przek?tnej macierzy z przesuni?ciem.
     * @param k Przesuni?cie przek?tnej.
     * @param t Tablica warto?ci do ustawienia na przek?tnej.
     * @return Referencja do obiektu matrix.
     */
    matrix& diagonalna_k(int k, int* t);

    /**
     * @brief Ustawia warto?ci w kolumnie macierzy.
     * @param x Numer kolumny.
     * @param t Tablica warto?ci do ustawienia w kolumnie.
     * @return Referencja do obiektu matrix.
     */
    matrix& kolumna(int x, int* t);

    /**
     * @brief Ustawia warto?ci w wierszu macierzy.
     * @param y Numer wiersza.
     * @param t Tablica warto?ci do ustawienia w wierszu.
     * @return Referencja do obiektu matrix.
     */
    matrix& wiersz(int y, int* t);

    /**
     * @brief Ustawia warto?ci na przek?tnej macierzy na 1, a pozosta?e na 0.
     * @return Referencja do obiektu matrix.
     */
    matrix& przekatna(void);

    /**
     * @brief Ustawia warto?ci pod przek?tn? macierzy na 1, a pozosta?e na 0.
     * @return Referencja do obiektu matrix.
     */
    matrix& pod_przekatna(void);

    /**
     * @brief Ustawia warto?ci nad przek?tn? macierzy na 1, a pozosta?e na 0.
     * @return Referencja do obiektu matrix.
     */
    matrix& nad_przekatna(void);

    /**
     * @brief Ustawia warto?ci w macierzy w formie szachownicy.
     * @return Referencja do obiektu matrix.
     */
    matrix& szachownica(void);

    /**
     * @brief Operator dodawania macierzy.
     * @param m Macierz do dodania.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator+(matrix& m);

    /**
     * @brief Operator mno?enia macierzy.
     * @param m Macierz do pomno?enia.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator*(matrix& m);

    /**
     * @brief Operator dodawania liczby do macierzy.
     * @param a Liczba do dodania.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator+(int a);

    /**
     * @brief Operator mno?enia macierzy przez liczb?.
     * @param a Liczba do pomno?enia.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator*(int a);

    /**
     * @brief Operator odejmowania liczby od macierzy.
     * @param a Liczba do odj?cia.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator-(int a);

    /**
     * @brief Operator dodawania liczby do macierzy (globalny).
     * @param a Liczba do dodania.
     * @param m Macierz.
     * @return Nowa macierz b?d?ca wynikiem dodawania.
     */
    friend matrix operator+(int a, matrix& m);

    /**
     * @brief Operator mno?enia liczby przez macierz (globalny).
     * @param a Liczba do pomno?enia.
     * @param m Macierz.
     * @return Nowa macierz b?d?ca wynikiem mno?enia.
     */
    friend matrix operator*(int a, matrix& m);

    /**
     * @brief Operator odejmowania liczby od macierzy (globalny).
     * @param a Liczba do odj?cia.
     * @param m Macierz.
     * @return Nowa macierz b?d?ca wynikiem odejmowania.
     */
    friend matrix operator-(int a, matrix& m);

    /**
     * @brief Operator inkrementacji macierzy.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator++(int);

    /**
     * @brief Operator dekrementacji macierzy.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator--(int);

    /**
     * @brief Operator dodawania liczby do macierzy.
     * @param a Liczba do dodania.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator+=(int a);

    /**
     * @brief Operator odejmowania liczby od macierzy.
     * @param a Liczba do odj?cia.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator-=(int a);

    /**
     * @brief Operator mno?enia macierzy przez liczb?.
     * @param a Liczba do pomno?enia.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator*=(int a);

    /**
     * @brief Operator dodawania liczby do macierzy.
     * @param value Warto?? do dodania.
     * @return Referencja do obiektu matrix.
     */
    matrix& operator()(double value);

    /**
     * @brief Operator wyj?cia strumienia dla obiektu matrix.
     * @param o Strumie? wyj?ciowy.
     * @param m Obiekt matrix do wy?wietlenia.
     * @return Strumie? wyj?ciowy.
     */
    friend ostream& operator<<(ostream& o, matrix& m);

    /**
     * @brief Operator porównania równo?ci macierzy.
     * @param m Macierz do porównania.
     * @return true je?li macierze s? równe, false w przeciwnym razie.
     */
    bool operator==(const matrix& m);

    /**
     * @brief Operator porównania wi?kszo?ci macierzy.
     * @param m Macierz do porównania.
     * @return true je?li bie??ca macierz jest wi?ksza, false w przeciwnym razie.
     */
    bool operator>(const matrix& m);

    /**
     * @brief Operator porównania mniejszo?ci macierzy.
     * @param m Macierz do porównania.
     * @return true je?li bie??ca macierz jest mniejsza, false w przeciwnym razie.
     */
    bool operator<(const matrix& m);
};
