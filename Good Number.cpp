#include <iostream>
using namespace std;

int main() {
    int Size, range, result = 0;
    cin >> Size >> range; // range = 6
    string myRange = "0123456789";

    for(int i=1; i<=Size; i++) { // 1 2 3 4 5 6 7 8 9 10
        int counter = 0;
        string num;
        cin >> num; // num = "1234560"
        for(int j=0; j<=range; j++) { // 0 1 2 3 4 5 6
            if(num.find(myRange.substr(j, 1)) != string::npos) { // substr =>> part of string
                counter++;
            }
        }
        if(counter == range+1) {
            result++;
        }
    }
    cout << result << endl;




    return 0;
}
