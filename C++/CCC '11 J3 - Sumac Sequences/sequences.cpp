#include <iostream>

using namespace std;

int main() {
    int a, b, c, length;
    cin >> a >> b;
    length = 2;
    while (a - b >= 0) {
        c = a - b;
        a = b;
        b = c;
        length += 1;
    }
    cout << length << '\n';
}
