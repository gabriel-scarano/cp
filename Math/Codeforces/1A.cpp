#include <iostream>

using namespace std;

int main ()
{   long long n, m, a, l, c;

    cin >> n >> m >> a;

    if (n % a == 0)
        l = n / a;
    else
        l = n / a + 1;

    if (m % a == 0)
        c = m / a;
    else
        c = m / a + 1;

    cout << l * c;

}