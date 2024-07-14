#include <bits/stdc++.h>
using namespace std;

int main() {
    int Size;
    cin >> Size;
    int flag = 0;
    int temp = 0;
    int otherFlag = 0;

    for(int i=0; i<Size; i++) {
        int score1, score2;
        cin >> score1 >> score2;
        // rated
        if(score1 != score2) {
            flag = 1;
            break;
        }
        if(temp < score1 && i != 0) {
            otherFlag = 1;
        }
        temp = score1;
    }
    if(flag == 1) {
        cout << "rated" << endl;
    } else if (otherFlag == 1) {
        cout << "unrated" << endl;
    } else {
        cout << "maybe" << endl;
    }



    return 0;
}
