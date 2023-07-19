#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double raio, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = 3.14159 * (raio*raio);
    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

    return 0;
}
