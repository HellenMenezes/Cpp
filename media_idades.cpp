#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int idade, cont;
    double soma, media;

    cont = 0;
    soma = 0;

    cout << "Digite as idades: " << endl;
    cin >> idade;

    if(idade < 0)
    {
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }
    else
    {
        while(idade >= 0)
        {
            cont++;
            soma = soma + idade;
            cin >> idade;
        }
        media = soma / cont;
        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }
    return 0;
}
