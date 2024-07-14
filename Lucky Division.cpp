#include <iostream>
using namespace std;

int main() {
    int luckly[13] = { 4,44,47,444,7,74,447,477,474,744,747,777,774 };
    int num;
    cin >> num;
    int flag = 0;
    for(int i=0; i<13; i++) {
        if(num%luckly[i] == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }



    return 0;
}
