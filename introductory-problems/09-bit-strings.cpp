#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

/*
 so over here instead of going recursion am looking in p&c after long time am thinking about this
 so I can get this done in O(1), it's so funny.
 FOR p ORDER MATTERS BUT FOR c ORDER DOESN'T
 O(log n) it isssss
*/

int binpow(int a, int n)
{
    int res = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            res = (1LL * res * a) % MOD;
        }
        a = (1LL * a * a) % MOD;
        n >>= 1;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    int res = binpow(2, n);
    cout << res << endl;
    return 0;
}