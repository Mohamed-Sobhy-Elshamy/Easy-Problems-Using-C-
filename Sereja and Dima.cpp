#include <iostream>
using namespace std;

int main() {
    int Size;
    cin >> Size;
    int arr[Size];

    for(int i=0; i<Size; i++) {
        cin >> arr[i];
    }
    int start = 0;
    int End = Size-1;
    int r1=0, r2=0, Max=0;
    int play = 0;
    while(start <= End) {
        if(arr[start] >= arr[End]) {
            Max = arr[start];
            start++;
        } else {
            Max = arr[End];
            End--;
        }

        // alert between players
        if(play%2 == 0) {
            r1 += Max;
        } else {
            r2 += Max;
        }
        play++;
    }
    cout << r1 << " " << r2 << endl;



    return 0;
}
