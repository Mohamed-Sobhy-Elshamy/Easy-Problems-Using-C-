#include <bits/stdc++.h>
using namespace std;

int main() {
    // Idea for This Problem =>> Using Swapping
    int Size;
    cin >> Size;
    int Max=0, maxPosition=0;
    int Min=101, minPosition=0;
    for(int i=1; i<= Size; i++) {   // My numbers => from 2 to 100
        int nums;
        cin >> nums;
        if(nums > Max) {
            Max = nums;
            maxPosition = i;
        }
        if(nums <= Min) {
            Min = nums;
            minPosition = i;
        }
    }
    if(maxPosition > minPosition) {
        cout << (maxPosition-1) + (Size - ++minPosition) << endl;
    } else {
        cout << (maxPosition-1) + (Size-minPosition) << endl;
    }

    return 0;
}
