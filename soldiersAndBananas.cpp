#include "stdc++.h"
using namespace std;
int main()
{
    long long int w, k;
    long long int n;
    cin >> k >> n >> w;
    long long sum = 0;
    for (int i = 1; i <= w; i++)
    {
        sum += (i * k);
    }
    if (sum <= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << sum - n << endl;
    }
    return 0;
}