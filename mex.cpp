// the mex of a set is defined as the smallest integer that is not present in the set.

#include <iostream>
using namespace std;

int main(){
  int n_test, n;
  cin>>n_test; 
  int arr;
  cout << "Number of test cases: ";
  
  for(int i=1;i<=n_test;i++){
    cin>>n;
    int arr[n];
    for (int j=0;j<n;j++){
      cin>>arr[j];
    }
    int mex = 0;
    while (true){
      bool found = false;
      for (int k=0 ;k<n ;k++){
        if (arr[k]==mex){
          found = true;
          break;
        }
      }
      if (found){
        mex++;
      }
      else{
        break;
      }
    }
  cout << "mex: " << mex << " \n";
 
}
 return 0;
}

