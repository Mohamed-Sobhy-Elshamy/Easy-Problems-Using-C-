#include <iostream>
using namespace std;

int arr[5000];
int main() {
    int Size;
    cin >> Size;
    int arr[Size];

    for(int i=1; i<=Size; i++) {
        int values;
        cin >> values;
        arr[values] = i ;
    }
    for(int i=1; i<=Size; i++) {
        cout << arr[i] << endl;
    }





    return 0;
}

