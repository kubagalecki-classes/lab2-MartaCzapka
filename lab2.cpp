#include <iostream>
using namespace std;
class Wektor
{
public:
    double* wektor = new double[n];
    Wektor(int liczba_el)
    {
        dlugosc = liczba_el;
        n       = liczba_el;
        for (int i = 0; i < n; i++) {
            wektor[i] = 0;
        }
    }
    int getD() { return dlugosc; }
    ~Wektor() { delete[] wektor; }
    void print()
    {
        for (int i; i < this->getD(); i++)
            cout << this->wektor[i] << " ";
        cout << "\n";
    }

private:
    int n;
    int dlugosc;
};
int main()
{
    int    dlugosc_wektora;
    Wektor wek(2);
    cout << wek.wektor[2] << "\n";
    dlugosc_wektora = wek.getD();
    cout << dlugosc_wektora << "\n";
    wek.print();
}
