//a single integer representing the minimum number of operations Maple needs to make aequal to b
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 ;
        } else if (a % b == 0 || b % a == 0) {
            cout << 1 ;
        } else {
            cout << 2 ;
        }
    }

    return 0;
}
