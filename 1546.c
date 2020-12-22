#include <stdio.h>
#define SWAP(a, b, t) ((t) = (a), (a) = (b), (b) = (t))

int take_max(int arr[], int size) {
  int i, t;
  for (i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i+1]) {
      SWAP(arr[i], arr[i+1], t);
    }
  }
  return arr[size-1];
}

int main(void) {
  int n, i, x, size, M;
  double answer;
  scanf("%d", &n);
  int arr[n];
  size = sizeof(arr) / sizeof(int);
  answer = 0;
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    arr[i] = x;
    answer += (double) x * 100 / n;
  }
  M = take_max(arr, size);
  answer /= M;  
  printf("%f\n", answer);

  return 0;
}
