#include <bits/stdc++.h>
#define ll long long

using namespace std;

void print(vector<ll> v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ll n;
    cin >> n;

    ll total = (n * (n + 1)) / 2;

    if (total % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    ll temp = total / 2;

    vector<ll> a, b;
    while (n != 0)
    {
        if (temp >= n)
        {
            a.push_back(n);
            temp -= n;
        }
        else
        {
            b.push_back(n);
        }
        n--;
    }

    ll x = a.size();
    ll y = b.size();

    cout << "YES" << endl;
    cout << x << endl;
    print(a);
    cout << y << endl;
    print(b);

    return 0;
}