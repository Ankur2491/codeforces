#include <iostream>
using namespace std;
long long power(long long b, long long p, long long m)
{
    long long result = 1;
    while (p)
    {
        if (p % 2)
            result = (result * b) % m;
        b = (b * b) % m;
        p /= 2;
    }
    return result;
}

int main()
{
    long long a, b, n;
        while(cin >> a >> b >> n)
            cout << power(a, b, n) << endl;
    return 0;
}