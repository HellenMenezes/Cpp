#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int codigo, quantidade;
    double valor;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    if(codigo == 1)
    {
        valor = quantidade * 5.00;
    }
    else if(codigo == 2)
    {
        valor = quantidade * 3.50;
    }
    else if(codigo == 3)
    {
        valor = quantidade * 4.80;
    }
    else if(codigo == 4)
    {
        valor = quantidade * 8.90;
    }
    else
    {
        valor = quantidade * 7.32;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}
