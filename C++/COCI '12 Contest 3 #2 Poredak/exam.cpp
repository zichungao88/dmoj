#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    char x[2500][16], words[16];
    int y[2500];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    int score = 0;
    for (int i = 0; i < n; i++) {
        cin >> words;
        for (int j = 0; j < n; j++) {
            if (strcmp(words, x[j]) == 0) {
                y[i] = j;
                for (int k = 0; k < i; k++)
                    score += (y[k] < y[i]);
                break;
            }
        }
    }
    cout << score << '/' << n * (n - 1) / 2;
}
