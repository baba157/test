#include <stdio.h>

int binarySearch(int arr[], int length, int element) {
  int left = 0;
  int right = length - 1;

  while(left <= right) {
    int mid = (left + right) / 2;

    if (arr[mid] == element) {
      return mid;
    } else if (arr[mid] < element) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1; 
}

int main() {
  int arr[] = {1, 2, 3, 5, 7 ,10, 12, 14, 15};

  int length = 9;
  int element = 5;

  int position = binarySearch(arr, length, element);

  printf("Position: %d\n", position);
}