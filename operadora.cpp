#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int minutos;
    double valor;

    valor = 50;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if(minutos > 100)
    {
        valor = valor + (minutos - 100) * 2;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}
