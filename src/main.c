#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
  char* ptr;
  int arr_size = 50;
  int* arr = malloc(arr_size * sizeof(int));
  srand(time(NULL));

  for(int i =0;i<arr_size;i++)
    arr[i] = rand()%1000;

  printf("Random array:\n");

  for(int i =0;i<arr_size;i++)
    printf("arrd[%d] = %d\n",i,arr[i]);

  free(arr);
  return 0;
}
