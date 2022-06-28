#include <iostream>
#include <set>

using namespace std;

int main() {
    int number;
    set <int> numbers;
    for (int i = 0; i < 10; i++) {
        cin >> number;
        numbers.insert(number % 42);
    }
    cout << numbers.size();
}
