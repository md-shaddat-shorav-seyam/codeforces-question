#include <bits/stdc++.h>
using namespace std;

void inc(int a, int b, int c, int &in)
{
    if (a > 0 && b > 0)
    {
        in++;
    }
    else if (c > 0 && b > 0)
    {
        in++;
    }
    else if (a > 0 && c > 0)
    {
        in++;
    }
}
int main()
{

    int n = 0, in = 0, a = 0, b = 0, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        inc(a, b, c, in);
    }

    cout << in << endl;
    return 0;
}