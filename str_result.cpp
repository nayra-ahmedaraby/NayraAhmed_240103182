//output the string that will result from Dima and Vlad's work.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, m;
        string a, b, c;
        cin >> n;
        cin >> a;
        cin >> m;
        cin >> b;

        for (int j = 0; j < m; ++j) {
            if (c[j] == 'V') {
                a = b[j] + a;
            } else {
                a = a + b[j];
            }
        }

        cout << a ;
    }

    return 0;
}
  