#include <bits/stdc++.h>
using namespace std;

int main() {
    string num1;
    cin >> num1; // "-100003"
    long long maxNum = stoi(num1); // convert to number
    string save = num1; // "-100003"
    num1.erase(num1.size()-1, 1);
    save.erase(save.size()-2, 1);

    long long result = max(stoi(num1), stoi(save));
    cout << max(maxNum, result) << endl;


    return 0;
}
