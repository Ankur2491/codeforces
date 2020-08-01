#include "stdc++.h"
using namespace std;

int main()
{
    int alphabets[26] = {0};
    string userName;
    int count = 0;
    cin >> userName;
    for (int i = 0; i < userName.length(); i++)
    {
        int index = userName[i] - 'a';
        alphabets[index] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] > 0)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}