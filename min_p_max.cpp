// the minimum possible maximum difference between the elements in pairs.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    

    for (int i = 1; i <= t; ++i) {
        cin >> n;
        int arr[n];
        int min=1e9;
        
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        for (int i = 1; i < n; ++i) {
            int k = arr[i] - arr[i - 1];
            if(k<min){
                min=k;
            }
        }

        cout << min << endl;

    }

    return 0;
}