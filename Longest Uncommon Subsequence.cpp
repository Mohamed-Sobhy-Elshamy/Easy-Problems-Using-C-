#include <bits/stdc++.h>
using namespace std;

// Function
int findSubSeq(string str1, string str2) {
    if(str1 == str2) {
        return -1;
    }
    return max(str1.length(), str2.length());
}


int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int finalResult = findSubSeq(s1, s2);
    cout << finalResult << endl;

    return 0;
}
