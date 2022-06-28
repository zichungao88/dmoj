#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> numbers{1, 2, 3, 4, 5, 6, 7, 8};
    vector <int> reverse{8, 7, 6, 5, 4, 3, 2, 1};
    vector <int> input(8);
    for (int i = 0; i < 8; i++) {
        cin >> input[i];
    }
    if (input == numbers) {
        cout << "ascending" << '\n';
    }
    else if (input == reverse) {
        cout << "descending" << '\n';
    }
    else {
        cout << "mixed" << '\n';
    }
}
