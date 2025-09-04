#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    // TODO: complete the function as per instructions
  if(arr.size() < 2)return-1;
  int largest = INT_MIN;
    int second = INT_MIN;
  for(int i =0; i < arr.size();i++){
  if(arr[i] > largest){
  second=largest;
  largest=arr[i];
  }else if (arr[i]>second && arr[i]!= largest){
    second=arr[i];
    }
  }
  return(second== INT_MIN)?-1 : second;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}
