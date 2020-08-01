#include "stdc++.h"
using namespace std;

int main()
{
    string a, b;
    int x, y;
    cin >> a >> b;
    int less = 0;
    for (int i = 0; i < a.length(); i++)
    {
        x = a[i];
        y = b[i];
        if ((x < 91 && y < 91) || (x > 96 && y > 96))
        {
            if (x < y)
            {
                less = -1;
                break;
            }
            else if (x > y)
            {
                less = 1;
                break;
            }
        }
        else
        {
            if (x > 96 && y < 91)
            {
                if (x - 32 < y)
                {
                    less = -1;
                    break;
                }
                else if (x - 32 > y)
                {
                    less = 1;
                    break;
                }
            }
            else if (x < 91 && y > 96)
            {
                if (y - 32 > x)
                {
                    less = -1;
                    break;
                }
                else if (y - 32 < x)
                {
                    less = 1;
                    break;
                }
            }
        }
    }

    cout << less << endl;
    return 0;
}