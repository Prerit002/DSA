#include <stdio.h>

int main() {
  // Declare an array of 5 elements.
  int arr[5];

  // Get input from the user for each element.
  for (int i = 0; i < 5; i++) {
   
    scanf("%d", &arr[i]);
  }

  // Print the elements of the array.
  printf("The elements of the array are:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}