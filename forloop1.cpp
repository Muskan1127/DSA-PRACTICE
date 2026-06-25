#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    cout << "Enter a number: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of numbers is: " << sum << endl;

    return 0;
}