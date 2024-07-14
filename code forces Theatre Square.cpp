#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate Horizontal & Vertical
    long long horizonal = ceil((double)n / a);
    long long vertical = ceil((double)m / a);

    // total stones
    long long total = horizonal * vertical;
    cout << total << endl;


    return 0;
}

