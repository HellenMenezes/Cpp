#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int n, i, cont = 0;
    double alturaSoma = 0, alturaMedia, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    vector<string> nomes(n);
    vector<int> idades(n);
    vector<double> alturas(n);

    for(i = 0; i < n; i++)
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

    for(i = 0; i < n; i++)
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

    for(i = 0; i < n; i++)
    {
        if(idades[i] < 16)
        {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
