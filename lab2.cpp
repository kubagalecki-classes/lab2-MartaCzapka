#include <iostream>
using namespace std;
class Wektor
{
public:
    double* wektor = new double[n];
    Wektor(int liczba_el)
    {
        n = liczba_el;
        for (int i = 0; i < n; i++) {
            wektor[i] = 0;
        }
    }
    ~Wektor() { delete[] wektor; }

private:
    int n;
};
int main()
{
    Wektor wek(2);
    cout << wek.wektor[2];
}
