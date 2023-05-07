#include <iostream>
#include <cmath>

using namespace std;

int main ()
{   string s, t;
    int sX, sY, tX, tY, length;

    cin >> s >> t;

    sX = s[0] % 97 + 1;
    sY = s[1] - '0';
    tX = t[0] % 97 + 1;
    tY = t[1] - '0';

    if (sX != tX && sY != tY && abs(tX - sX) > abs(tY - sY))
        length = abs(tX - sX);
    else if (sX != tX && sY != tY && abs(tX - sX) <= abs(tY - sY))
        length = abs(tY - sY);
    else if (sX == tX && sY != tY)
        length = abs(sY - tY);
    else
        length = abs(sX - tX);

    cout << length << endl;

    while (!(sX == tX && sY == tY)) // ou (sX != tX || sY != tY)
    {   if (sX != tX && sY != tY)
        {   if (sX < tX && sY < tY)
            {   cout << "RU" << endl;
                sX++;
                sY++;
            } else if (sX < tX && sY > tY)
            {   cout << "RD" << endl;
                sX++;
                sY--;
            } else if (sX > tX && sY < tY)
            {   cout << "LU" << endl;
                sX--;
                sY++;
            } else
            {   cout << "LD" << endl;
                sX--;
                sY--;
            }
        } else if (sX == tX && sY < tY)
        {   cout << "U" << endl;
            sY++;
        } else if(sX == tX && sY > tY)
        {   cout << "D" << endl;
            sY--;
        } else if (sX < tX && sY == tY)
        {   cout << "R" << endl;
            sX++;
        } else
        {   cout << "L" << endl;
            sX--;
        }
    }

    return 0;
}