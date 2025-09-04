#include<bits/stdc++.h>
using namespace std;
int main() {
    int matrix[5][5];
    // int x, y;

   
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> matrix[i - 1][j - 1]; 
            if (matrix[i - 1][j - 1] == 1) {
                // x = i; // Store the row of `1`
                // y = j; // Store the column of `1`
                cout << ((i >= 3) ? i - 3 : 3 - i) + ((j >= 3) ? j - 3 : 3 - j) << endl;

                return 0;
            }
        }
    }

    // Calculate the Manhattan distance to the center (3, 3)
   // int moves = abs(x - 3) + abs(y - 3);

    // Output the result
    // cout << ((x >= 3) ? x - 3 : 3 - x) + ((y >= 3) ? y-3 : 3-y) << endl;

    // return 0;
}






