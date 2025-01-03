// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int i=0,j=0,count=0;
//     int a[5][5];
//     for ( i = 1; i <=5; i++)
//     {
//         for ( j = 1; j <= 5; j++)
//         {
                
//                 cin>>a[i][j]; 

//                 if(a[i][j] == 1){


//                      if((i+j)>6){
//                     count = ((i+j)-6);
//                 } 
//                  if((i+j)<6){
//                     count =(6-(i+j));
//                 } 

                    
//                 }
                
//         }
        
//     }
    

    
               
//     cout<<"\n"<<count;

// }


#include <iostream>
#include <cmath> // For abs function
using namespace std;

int main() {
    int matrix[5][5];
    int x, y;

    // Input the matrix and find the position of `1`
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> matrix[i - 1][j - 1]; // Adjust for 0-based indexing
            if (matrix[i - 1][j - 1] == 1) {
                x = i; // Store the row of `1`
                y = j; // Store the column of `1`
            }
        }
    }

    // Calculate the Manhattan distance to the center (3, 3)
    int moves = abs(x - 3) + abs(y - 3);

    // Output the result
    cout << moves << endl;

    return 0;
}






