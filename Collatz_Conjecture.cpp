//Collatz Conjecture
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int k, x;
        cin >> k >> x;

        int current = x;

        for (int j = 0; j < k; ++j) {
            if ((current - 1) % 3 == 0 && ((current - 1) / 3) % 2 == 1) {
                current = (current - 1) / 3; 
            } else {
                current = current * 2; 
            }
        }

        cout << current << endl;
    }

    return 0;
}
