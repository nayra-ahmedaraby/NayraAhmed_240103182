//the sum of all integers in the sequence.
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n , x;
    for (int i = 0; i < t; ++i) {
        cin >> x;
        cin >> n;
        if (n % 2 == 0) {
            cout << 0;
        } else {
            cout << x;
        }
    }

    return 0;
}