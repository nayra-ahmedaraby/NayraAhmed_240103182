#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        int add = (3 - n % 3) % 3;  
        cout << add ;
    }

    return 0;
}
