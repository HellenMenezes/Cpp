#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i, quantidade, coelhos = 0, ratos = 0, sapos = 0, total;
    char tipo;
    double percentC, percentR, percentS;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cout << "Quantidade de cobaias: ";
        cin >> quantidade;

        cout << "Tipo de cobaia: ";
        cin >> tipo;

        if(tipo == 'C')
        {
            coelhos = coelhos + quantidade;
        }
        else if(tipo == 'R')
        {
            ratos = ratos + quantidade;
        }
        else
        {
            sapos = sapos + quantidade;
        }
    }

    total = coelhos + ratos + sapos;
    percentC = ((double)coelhos / total) * 100.0;
    percentR = ((double)ratos / total) * 100.0;
    percentS = ((double)sapos / total) * 100.0;

    cout << endl << "RELATORIO FINAL: " << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentC << endl;
    cout << "Percentual de ratos: " << percentR << endl;
    cout << "Percentual de sapos: " << percentS << endl;

    return 0;
}
