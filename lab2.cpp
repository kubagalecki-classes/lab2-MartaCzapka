#include <iostream>
#include <vector>
using namespace std;
class Wektor
{
public:
    double* wektor = new double[n];
    Wektor(int liczba_el)
    {
        pojemnosc = liczba_el;
        dlugosc   = liczba_el;
        n         = liczba_el;
        for (int i = 0; i < n; i++) {
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
        for (int i; i < this->getD(); i++)
            cout << this->wektor[i] << " ";
        cout << "\n";
    }
    int getP() { return pojemnosc; }

private:
    int n;
    int dlugosc;
    int pojemnosc;
};
int main()
{
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
}
