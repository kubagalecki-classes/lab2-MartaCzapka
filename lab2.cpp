#include <iostream>
using namespace std;
class Wektor
{
public:
    double* wektor = new double[n];
    Wektor(int liczba_el) { n = liczba_el; }
    ~Wektor() { delete[] wektor; }

private:
    int n;
};
int main()
{
    Wektor wek(2);
    cout << wek.wektor[1];
}
