#include <iostream>
#define ll long long

using namespace std;

int solucao (ll n, ll k)
{   ll aux = 2, horas = 0;

    if (k == 0)
        return 0;

    while (aux < k || aux < n)
    {   aux *= 2;
        horas++;
    }
    
    aux /= 2;

    cout << aux << endl;
        


    return horas;
}

int main ()
{   int t;
    ll n, k;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {   cin >> n >> k;
        cout << solucao(n, k) << endl;
    }
    
    return 0;
}