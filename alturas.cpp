#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, cont = 0;
    double alturaSoma = 0, alturaMedia, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Dados da " << i+1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];

        alturaSoma = alturaSoma + alturas[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(idades[i] < 16)
        {
            cont++;
        }
    }

    porcentagem = cont * 100.0 / n;
    alturaMedia = alturaSoma / n;
    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << alturaMedia << endl;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for(int i = 0; i < n; i++)
    {
        if(idades[i] < 16)
        {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
