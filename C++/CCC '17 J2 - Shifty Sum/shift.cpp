#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, k, x;
    cin >> n;
    cin >> k;
    x = 0;
    for (int i = 0; i <= k; i++) {
        x += n * pow(10, i);
    }
    cout << x << '\n';
}
