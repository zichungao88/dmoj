#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    for (int i = 0; i < number; i++) {
        long long k;
        cin >> k;
        if ((k * k * k - 888) % 1000 == 0) {
            k += 1;
        }
        while ((k * k * k - 888) % 1000 != 0) {
            k += 1;
        }
        cout << k << '\n';
    }
}
