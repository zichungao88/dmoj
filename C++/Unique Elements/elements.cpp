#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, number;
    cin >> n;
    set <int> numbers;
    for (int i = 0; i < n; i++) {
        cin >> number;
        numbers.insert(number);
    }
    cout << numbers.size();
}
