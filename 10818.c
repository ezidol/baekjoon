#include <stdio.h>

void merge(int arr[], int left, int middle, int right) {
  int i, j, k;
  int n1 = middle - left + 1;
  int n2 = right - middle;
  int L[n1], R[n2];
  for (i = 0; i < n1; i++) L[i] = arr[left+i];
  for (j = 0; j < n2; j++) R[j] = arr[middle + 1 + j];
  i = 0;
  j = 0;
  k = left;
  while (i < n1 && j < n2) {
    if (L[i] < R[j]) {
        arr[k] = L[i];
        i++;
    } else {
        arr[k] = R[j];
        j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int left, int right) {
  if (left < right) {
    int middle = (left + right) / 2;
      mergeSort(arr, left, middle);
      mergeSort(arr, middle + 1, right);
      merge(arr, left, middle, right);
  }
    
}

int main(void) {
  int num, i, x, min, max;
  scanf("%d", &num);
  int arr[num];
  for (i = 0; i < num; i++) {
    scanf("%d", &x);
    arr[i] = x;
  }
  mergeSort(arr, 0, num-1);
  min = arr[0];
  max = arr[num-1];
  printf("%d %d\n", min, max);

  return 0;
}
