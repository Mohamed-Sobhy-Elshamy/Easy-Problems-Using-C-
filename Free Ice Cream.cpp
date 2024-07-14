#include <iostream>
using namespace std;

int main() {
    long long Round;
    cin >> Round;
    long long ice;
    cin >> ice;
    int counter=0;
    for(int i=0; i<Round; i++) {
        char oper;
        long long num;
        cin >> oper >> num;

        if(oper == '+') {
            ice += num;
        } else {
            if(num <= ice) {
                ice -= num;
            } else {
                counter++;
            }
        }
    }
    cout << ice << " " << counter << endl;


    return 0;
}
