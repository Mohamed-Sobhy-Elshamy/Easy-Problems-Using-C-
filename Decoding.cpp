#include <bits/stdc++.h>
using namespace std;

int main() {
    int Size;
    cin >> Size;
    string word;
    cin >> word;
    string res = "";
    int i = 0;

    while(Size) {
        if(Size%2 == 0) { // Is Even
            res = word[i] + res;
        } else { // Is Odd
            res = res + word[i];
        }
        i++;
        Size--;
    }
    cout << res << endl;



    return 0;
}

