//The goal is to make the product of all elements in the array strictly positive with the minimum number of operations,
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter number of test cases: ";
    int n;
    cin >> n;
    int j;
    int num;
    int arr[j];
    
    

    for (int i = 1; i <= n; ++i) {
        cin >> j;
        int operations = 0;
        int n_neg = 0;
        for (int k = 0; k < j; ++k) {
            cin >> arr[k];
        }
        for (int k = 0; k < j; ++k) {
            if (arr[k] < 0) {
                n_neg++;
            }
            if (arr[k] == 0) {
                operations++;
            }
        }
        if (n_neg % 2 != 0) {
            operations += 2;
        }
        cout << operations << "\n";
    }
    
    return 0;
}