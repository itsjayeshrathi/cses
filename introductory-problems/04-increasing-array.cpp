#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n, 0);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long min_ops = 0;
    for (long long i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            min_ops += abs(v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }
    }
    cout << min_ops << endl;
    return 0;
}