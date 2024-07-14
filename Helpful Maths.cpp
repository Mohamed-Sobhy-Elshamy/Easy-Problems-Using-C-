#include <bits/stdc++.h>
using namespace std;

int main() {
    // Using ASCII Code
    // Variables
    string equ; // "123" =>> Array of chars
    cin >> equ;
    int mySize = (equ.length()/2) + 1;
    int arr[mySize];
    int counter = 0;

    // Loop
    for(int i=0; i<equ.length(); i++) {
        if(equ[i] == '+') {
            continue;
        }
        arr[counter] = equ[i] - '0';
        counter++;
    }

    // Sorting this array
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + sizeOfArr);

    // Print equation
    for(int i=0; i<mySize; i++) {
        if(i != 0) {
            cout << "+";
        }
        cout << arr[i] ;
    }



    return 0;
}
