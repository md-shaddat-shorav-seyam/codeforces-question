#include <bits/stdc++.h>
using namespace std;

bool chk(string s, string sym);
void count(string s, int &n)
{
    if (chk(s, "++"))
    {
        n++;
    }
    if (chk(s, "--"))
    {
        n--;
    }
}

bool chk(string s, string sym)
{
    size_t startPos = s.find(sym);
    if (startPos != string::npos)
    {
        return true;
    }
    return false;
}
int main()
{

    int x = 0, n = 0;

    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cout << "\n";
        count(s, x);
    }

    cout << x << endl;
}












// void count(string s, int &n) {
//     if (chk(s, "++")) { 
//         n++;
//     } else if (chk(s, "--")) { 
//         n--;
//     }
// }


// bool chk(string s, string sym) {
//     size_t startPos = s.find(sym);
//     if (startPos != string::npos) { 
//         return true;
//     }
//     return false;
// }

// int main() {
//     int n = 0; 
//     int operations; 
//     cin >> operations;

//     string s;
//     for (int i = 0; i < operations; i++) {
//         cin >> s; 
//         count(s, n); 
//     }

//     cout << n << endl; 
//     return 0;
// }
