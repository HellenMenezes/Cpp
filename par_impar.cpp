#include <iostream>

using namespace std;

int main()
{
    int n, i, x;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cout << "Digite um numero: ";
        cin >> x;

        if(x == 0)
        {
            cout << "NULO" << endl;
        }
        else
        {
            if(x % 2 == 0)
            {
                cout << "PAR";
            }
            else
            {
                cout << "IMPAR";
            }
            if(x > 0)
            {
                cout << " POSITIVO" << endl;
            }
            else
            {
                cout << " NEGATIVO" << endl;
            }
        }
    }

    return 0;
}
