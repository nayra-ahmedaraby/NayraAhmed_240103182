#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int a[n], b[n];
        int iterations = 0;

        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < n; ++j) {
            cin >> b[j];
            if (a[j] > b[j]) {
                iterations += a[j] - b[j];
            } else if (a[j] < b[j]) {
                iterations += b[j] - a[j];
            }
        }

        cout << iterations ;
    }

    return 0;
}
