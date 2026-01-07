#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    long long max_count = INT_MIN;
    long long temp_count = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            temp_count++;
        }
        else
        {
            max_count = max(max_count, temp_count);
            temp_count = 1;
        }
    }

    max_count = max(max_count, temp_count);
    cout << max_count << endl;
    return 0;
}