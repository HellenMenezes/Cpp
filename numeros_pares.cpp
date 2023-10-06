#include <iostream>

using namespace std;

int main()
{
    int n, cont = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    vector<int> vet(n);

    for(int i = 0; i < n; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "NUMEROS PARES: " << endl;

    for(int i = 0; i < n; i++)
    {
        if(vet[i] % 2 == 0)
        {
            cout << vet[i] << "  ";
            cont++;
        }
    }

    cout << endl << endl << "QUANTIDADE DE PARES = " << cont << endl;

    return 0;
}
