#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    for (int i = 0; i < number; i++) {
        int m, n;
        cin >> m >> n;
        int area;
        area = m * n;
        cout << area - 1 << '\n';
    }
}
