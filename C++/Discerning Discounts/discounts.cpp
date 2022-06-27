#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int c, d;
        cin >> c >> d;
        if ((double)c * (100 - d) / 100 <= t) {
            count += 1;
        }
    }
    cout << count << '\n';
}
