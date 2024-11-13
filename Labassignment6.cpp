//Question 1
/*
#include <iostream>
using namespace std;

int calculateSum(int arr[], int size){
    int sum = 0;
    for(int i=0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {10,20,30,40,50,60,40,342};
    int size = 8;
    int sum = calculateSum(arr, size);
    cout << "Sum:" << sum << endl;
    return 0;
}
*/

//Question 2 
/*
#include <iostream>

using namespace std;

int findMaxElement(int arr[], int size) {
  int maxElement = arr[ 0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > maxElement) {
      maxElement = arr[i];
    }
  }
  return maxElement;
}

int main() {
  int arr[] = {3, 1, 4, 1, 5, 9, 2,11,22,69};
  int size = 10;
  int maxElement = findMaxElement(arr, size);
  cout << "Maximum Element: " << maxElement << endl;
  return 0;
}
*/

//Question 3 
/*
#include <iostream>

using namespace std;

void reverseArray(int arr[], int size) {
  int left = 0;
  int right = size - 1;
  while (left < right) {
    
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    
    left++;
    right--;
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5,55,44};
  int size = 7;
  cout << "Original Array: ";
  printArray(arr, size);
  reverseArray(arr, size);
  cout << "Reversed Array: ";
  printArray(arr, size);
  return 0;
}
*/

//Question 4
/*
#include <iostream>

using namespace std;

int countOccurrences(int arr[], int size, int target) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      count++;
    }
  }
  return count;
}

int main() {
  int arr[] = {1, 2, 3, 1, 4, 1, 5,9,45,44};
  int size = 10;
  int target = 1;
  int occurrences = countOccurrences(arr, size, target);
  cout << "Occurrences of " << target << ": " << occurrences << endl;
  return 0;
}

*/
//Question 5 

#include<iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
        return -1;
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != -1) {
        cout << "Second Largest Element: " << secondLargest << endl;
    }

    return 0;
}