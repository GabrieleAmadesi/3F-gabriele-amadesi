#include <iostream>
using namespace std;
int main() 
{int età;
 cout << "inserisci la tua età" << endl;
cin >> età;
if (età<14) {cout << "non puoi guidare nessun mezzo" << endl;}
else if (età > 14)  {cout << "puoi guidare lo scooter con cilindrata 50cc" << endl;}
else if (età > 16)  {cout << "puoi guidare la moto con cilindrata 125cc" << endl;}
else if (età > 18)  {cout << "puoi guidare l'auto fino a 95 cavalli" << endl;}
else if (età > 21)  {cout << "puoi guidare qualsiasi auto o moto senza limitazioni" << endl;}

return 0;}




