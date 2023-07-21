#include <iostream>

using namespace std;

int main()
{
    int duracao, horas, minutos, segundos;

    cout << "Digite a duracao em segundos: ";
    cin >> duracao;

    horas = duracao / 3600;
    minutos = (duracao % 3600) / 60;
    segundos = duracao % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
