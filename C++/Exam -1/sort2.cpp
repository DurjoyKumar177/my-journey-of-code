#include <iostream>
#include <algorithm>

using namespace std;

void sort_it(int arr[], int n) {
  sort(arr, arr + n, greater<int>());
}

int main() {
  int n;
  cin >> n;

  // Allocate memory for the array
  int arr[n];

  // Get array input
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Sort the array in descending order
  sort_it(arr, n);

  // Print the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
