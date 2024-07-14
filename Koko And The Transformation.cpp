#include <bits/stdc++.h>
using namespace std;

int main() {
    int Size1, Size2;
    cin >> Size1 >> Size2;
    int num;
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i<Size1; i++) {
        cin >> num;
        sum1 += num;
    }
    for(int i=0; i<Size2; i++) {
        cin >> num;
        sum2 += num;
    }
    if(sum1 == sum2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }




    return 0;
}
