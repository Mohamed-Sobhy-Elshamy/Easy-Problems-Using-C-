#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Using ASCII Code
    string value;
    cin >> value;
    int start = 97; // a
    int step = 0;

    for(int i=0; i<value.size(); i++) {
        int result = abs(value[i] - start) ; // i=any char - 97=start
        if(result <= 13) {
            step += result;
        } else {
            step += (26-result);
        }
        start = value[i];
    }
    cout << step << endl;



    return 0;
}
