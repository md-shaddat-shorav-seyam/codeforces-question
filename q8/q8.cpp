#include <bits/stdc++.h>

using namespace std;

int found(char x)
{
  char s[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
              'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
              'w', 'x', 'y', 'z'};

  for (int i = 0; i < 26; i++)
  {
    if (s[i] == x)
    {
      return i;
    }
  }
  return 0;
}
int main()
{

  int c = 0, d = 0;
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < a.length(); i++)
  {
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
  }

  if (a != b)
  {

    for (int i = 0; i <= a.length(); i++)
    {

      if (a[i] != b[i])
      {

        c = found(a[i]);
        d = found(b[i]);
        if (c > d)
        {
          cout << "1" << endl;
          return 0;
        }
        if (d > c)
        {
          cout << "-1" << endl;
          return 0;
        }
      }
    }
  }
  else
  {
    cout << "0" << endl;
  }

  return 0;
}
