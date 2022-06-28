#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;
    int distance = abs(a - c) + abs(b - d);
    if (t >= distance && !((t - distance) % 2)) {
        cout << 'Y';
    }
    else {
        cout << 'N';
    }
}
