#include <iostream>
using namespace std;

int main() {
    int Size;
    cin >> Size;
    int police = 0;
    int crime = 0;

    for(int i=0; i<Size; i++) {
        int num;
        cin >> num;
        if(num == -1) {
            if(police > 0) {
                police--;
            } else {
                crime++;
            }
        } else {
            police+=num;
        }
    }
    cout << crime << endl;


    return 0;
}

