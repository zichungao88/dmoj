#include <iostream>

using namespace std;

int main() {
    int n, c;
    for (int i = 0; i < 5; i++) {
        cin >> n >> c;
        int m = 1;
        int s = 0;
        int answer = 0;
        while (n > 0) {
            n -= m;
            s += m;
            if (s >= c) {
                s = 0;
                m *= 2;
            }
            answer++;
        }
        cout << answer << '\n';
    }
}
