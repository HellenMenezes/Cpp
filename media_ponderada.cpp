#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    double valor1, valor2, valor3, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    cout << fixed << setprecision(1);

    for(i = 1; i <= n; i++)
    {
        cout << "Digite tres numeros: " << endl;
        cin >> valor1 >> valor2 >> valor3;
        media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / 10.0;
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
