#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vetor[n], somapares = 0, npares = 0;
    double mediapares;

    for(int i = 0; i < n; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            somapares = somapares + vetor[i];
            npares++;
        }
    }

    if(npares == 0)
    {
        cout << "NENHUM NUMERO PAR" << endl;
    }
    else
    {
        mediapares = (double)somapares / npares;
        cout << setprecision(1) << fixed;
        cout << "MEDIA DOS PARES = " << mediapares << endl;
    }

    return 0;
}
