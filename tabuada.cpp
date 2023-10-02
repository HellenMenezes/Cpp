#include <iostream>

using namespace std;

int main()
{
    int i, n, resultado;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for(i = 1; i <= 10; i++)
    {
        resultado = n * i;
        cout << n << " x " << i << " = " << resultado << endl;
    }

    return 0;
}
