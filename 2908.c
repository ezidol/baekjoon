#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *nums;
  int a, b;
  nums = malloc(sizeof(char) * 8); 
  scanf("%[^\n]", nums);
  a = (nums[2]-0x30) * 100 + (nums[1]-0x30) * 10 + (nums[0]-0x30) * 1;
  b = (nums[6]-0x30) * 100 + (nums[5]-0x30) * 10 + (nums[4]-0x30) * 1;
  if (a > b) {
    printf("%d\n", a);
  } else {
    printf("%d\n", b);
  }
  free(nums);

  return 0;
}
