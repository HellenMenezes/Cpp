#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double preco, dinheiro, troco;
    int quantidade;

    cout << "Preço unitário do produto: ";
    cin >> preco;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    cout << fixed << setprecision(2);

    if(dinheiro < preco * quantidade)
    {
        troco = (preco * quantidade) - dinheiro;
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << troco << " REAIS " << endl;
    }
    else
    {
        troco = dinheiro - (preco * quantidade);
        cout << "TROCO = " << troco << endl;
    }
    return 0;
}
