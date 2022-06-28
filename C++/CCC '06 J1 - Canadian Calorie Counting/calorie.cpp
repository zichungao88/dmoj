#include <iostream>

using namespace std;

int main() {
    int order;
    int calorie = 0;
    int food[4][4] {{461, 431, 420, 0}, {100, 57, 70, 0}, {130, 160, 118, 0}, {167, 266, 75, 0}};
    for (int i = 0; i < 4; i++) {
        cin >> order;
        calorie += food[i][order-1];
    }
    cout << "Your total Calorie count is " << calorie << '.' << '\n';
}
