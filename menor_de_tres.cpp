#include <iostream>

using namespace std;

int main()
{
    int x, y, z, menor;

    cout << "Primeiro valor: ";
    cin >> x;

    cout << "Segundo valor: ";
    cin >> y;

    cout << "Terceiro valor: ";
    cin >> z;

    menor = 0;

    if(x < y && x < z)
    {
        menor = x;
    }
    else if(y < z)
    {
        menor = y;
    }
    else
    {
        menor = z;
    }

    cout << "MENOR = " << menor << endl;

    return 0;
}
