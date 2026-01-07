#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v;

    v.push_back(n);
    while (n != 1)
    {
        if (n & 1)
        {
            n = (n * 3) + 1;
            v.push_back(n);
        }
        else
        {
            n = n / 2;
            v.push_back(n);
        }
    }

    for (auto &i : v)
    {
        cout << i << " ";
    }

    return 0;
}