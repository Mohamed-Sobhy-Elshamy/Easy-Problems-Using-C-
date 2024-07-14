#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string val1, val2;
    cin >> val1 >> val2;
    int counter = 0;

    for(int i=0; i<val2.length(); i++) {
        if(val1[counter] == val2[i]) {
            counter++;
        }
    }
    cout << ++counter << endl;



    return 0;
}
