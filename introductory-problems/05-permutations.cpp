#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
   
    if (n  == 2 || n == 3)
    {

        cout << "NO SOLUTION";
        return 0;
    }

    vector<int> even, odd;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            odd.push_back(i);
        }
        else
        {
            even.push_back(i);
        }
    }

    for (auto i : even)
    {
        cout << i << " ";
    }
    for (auto i : odd)
    {
        cout << i << " ";
    }
    return 0;
}