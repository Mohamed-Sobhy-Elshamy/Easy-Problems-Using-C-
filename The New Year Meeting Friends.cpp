#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int maxNums = max(max(num1, num2), num3);
    int minNums = min(min(num1, num2), num3);
    int finalResult = maxNums - minNums ;
    cout << finalResult << endl;




    return 0;
}
