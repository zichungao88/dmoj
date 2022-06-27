#include <iostream>

using namespace std;

int main() {
    long long n, b, p, s;
    cin >> n >> b;
    s = 0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        s += p;
    }
    if (b >= s) {
        cout << b - s << '\n';
    }
    else {
        cout << "The budget will balance itself" << '\n';
    }
}
