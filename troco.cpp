#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double preco, dinheiro, troco;
    int quantidade;

    cout << "Preco unitário do produto: ";
    cin >> preco;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    troco = dinheiro - (preco * quantidade);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}
