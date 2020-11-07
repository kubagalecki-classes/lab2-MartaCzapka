#include <iostream>
#include <vector>
using namespace std;
class Wektor
{
public:
    double* wektor = new double[dlugosc];
    double* w      = new double[dlugosc];
    Wektor(const Wektor& w) : dlugosc{w.dlugosc} {}
    Wektor(int liczba_el) : dlugosc{liczba_el}
    {
        pojemnosc = liczba_el;
        dlugosc   = liczba_el;

        for (int i = 0; i < dlugosc; i++) {
            wektor[i] = 0;
        }
    }
    void zmienDlugosc(int nowa_dlugosc)
    {
        if (nowa_dlugosc > pojemnosc) {
            double* wekt;
            wekt   = wektor;
            wektor = new double[nowa_dlugosc];
            for (int i = 0; i < nowa_dlugosc; i++) {
                if (i < dlugosc) {
                    wektor[i] = wekt[i];
                }
                else
                    wektor[i] = 0;
            }
            pojemnosc = nowa_dlugosc;
            delete[] wekt;
        }
        else {
            for (int i = this->getP() - 1; i < nowa_dlugosc; i++)
                this->wektor[i] = 0;
        }
        dlugosc = nowa_dlugosc;
    }
    int getD() { return dlugosc; }
    ~Wektor() { delete[] wektor; }
    void print()
    {
        for (int i; i < this->dlugosc; i++)
            cout << this->wektor[i] << " ";
        cout << "\n";
    }
    int     getP() { return pojemnosc; }
    double& operator[](int x)
    {
        if (x > dlugosc)
            this->zmienDlugosc(x + 1);
        return wektor[x];
    }

private:
    int dlugosc;
    int pojemnosc;
};
struct Kokardka
{
    Kokardka() { dlugosc = 42; }
    // Kokardka(int d) { dlugosc = d; }
    int dlugosc;
};
struct Prezent
{
    Prezent(int dk)
    {
        cout << k.dlugosc << "\n";
        k.dlugosc = dk;
    }
    Kokardka k;
};
struct Liczba
{
    Liczba(int w) : wartosc{w} { cout << "Konstruktor \n"; }
    Liczba(const Liczba& l) : wartosc{l.wartosc} { cout << "Konstruktor kopiujący \n"; }
    int wartosc;
};
int main()
{
    Liczba   h{1};
    Liczba   b{h};
    Liczba   c = h;
    Kokardka ko;
    Prezent  pre(3);

    int    dlugosc_wektora;
    int    pojemnosc_wektora;
    Wektor wek(2);
    wek.wektor[0] = 1;
    wek.wektor[1] = 2;
    cout << wek.wektor[2] << "\n";
    dlugosc_wektora = wek.getD();
    cout << dlugosc_wektora << "\n";
    wek.print();
    pojemnosc_wektora = wek.getP();
    cout << pojemnosc_wektora << "\n";
    wek.zmienDlugosc(5);
    dlugosc_wektora = wek.getD();
    cout << dlugosc_wektora << "\n";
    wek.print();
    pojemnosc_wektora = wek.getP();
    cout << pojemnosc_wektora << "\n";
    Wektor j = wek;
    j.print();
    wek.wektor[8] = 42.;
    cout << dlugosc_wektora << "\n";
    double a = wek.wektor[8];
    a++;
    wek.print();
    cout << wek.wektor[8] << " " << a;
}
