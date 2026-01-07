#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long partial_sum = 0;

    vector<long long> v(n - 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        partial_sum += v[i];
    }

    long long total_sum = (n * (n + 1)) / 2;

    cout << (total_sum - partial_sum) << endl;

    return 0;
}