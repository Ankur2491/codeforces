#include <iostream>
using namespace std;
long long power(long long a, long long b, long long n)
{
    long long result = 1;
    while (b)
    {
        if (b % 2)
            result = (result * a) % n;
        a = (a * a) % n;
        b /= 2;
    }
    return result;
}

int main()
{
    int c, x;
    long long a, b, n;
    cin >> c;
    while (c--)
    {
        cin >> a >> b >> n;
        cout << power(a, b, n) << endl;
    }
    cin >> x;
    return 0;
}