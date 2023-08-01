#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, maior;

    cout << "Digite as tres distancias: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    maior = 0;

    if(a > b && a > c)
    {
        maior = a;
    }
    else if(b > a && b > c)
    {
        maior = b;
    }
    else
    {
        maior = c;
    }

    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maior << endl;

    return 0;
}
