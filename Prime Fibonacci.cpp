#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, temp;
        for (int i = 2; i <= n; ++i) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return a;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int result = fibonacci(N);

        if (isPrime(result)) {
            cout << "prime" << endl;
        } else {
            cout << "not prime" << endl;
        }
    }

    return 0;
}
