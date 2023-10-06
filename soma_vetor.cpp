#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    double soma = 0, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Digite um numero positivo para n: ";
        cin >> n;
    }

    double vet[n];

    for(i = 0; i < n; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << fixed << setprecision(1);
    cout << endl << "VALORES: ";

    for(i = 0; i < n; i++)
    {
        cout << vet[i] << "  ";
    }

    for(i = 0; i < n; i++)
    {
        soma = soma + vet[i];
    }

    media = soma / n;
    cout << fixed << setprecision(2);
    cout << endl << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}
