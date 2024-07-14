#include <iostream>
using namespace std;

int main() {
    int Size, counter=1;
    cin >> Size;
    string temp;
    for(int i=0; i<Size;i++) {
        string value;
        cin >> value;
        if(i == 0) {
            temp = value;
            continue;
        }
        if(temp[1] == value[0]) {
            counter++;
        }
        temp = value;
    }
    cout << counter << endl;



    return 0;
}
