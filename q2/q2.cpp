#include <bits/stdc++.h>

using namespace std;

int main()
{

    string j;
    int n;
    cin >> n;
    string a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> j;
        if (j.length() > 10)
        {

            a[i] = j.front() + to_string(j.length() - 2) + j.back();
        }
        else
        {
            a[i] = j;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << endl;
    }

    return 0;
}