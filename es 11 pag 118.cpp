#include <iostream>
using namespace std;
int main()
{
    int a, b, x;
    cout << "inserisci i coefficienti di a, b, x" << endl;
    cin >> a;
    cin >> b;

    if (a == 0) {
        cout << "la soluzione dell'equazione è ..." << endl;
        return 1;
    }

    if (b < 0)
    {
        b == 0;
        cout << "la soluzione dell'equazione è indeterminata" << x << endl;
    }
    else if (b > 0)
    {
        a == 0;
        b != 0;
        cout << "la soluzione dell'equazione è impossibile" << x << endl;
    }
    if (a < 0)
    {
        a != 0;
        cout << "la soluzione dell'equazione è" << x << endl;
    }
    else if (a > 0)
    {
        a == 0;
        b != 0;
        cout << "la soluzione dell'equazione è impossibile" << x << endl;
    }

    return 0;
}