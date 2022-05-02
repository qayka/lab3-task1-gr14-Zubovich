#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int Check(int number) {
  while(number > 1 && (number % 5) == 0){
    number = number/5;
    }
  if(number == 1)
    return 1;
  else 
    return 0;
}


int main (int argc,char** argv)
{
  if(argc<2){
      printf("Invalid number of arguments");
      return 1;
  }
  char* ptr;
  int arr_size = strtol(argv[1],&ptr,10);
  int* arr = malloc(arr_size * sizeof(int));
  srand(time(NULL));

  for(int i =0;i<arr_size;i++)
    arr[i] = rand()%1000;
  arr[2] = 125;

  for(int i = 0;i<arr_size;i++)
    if(Check(arr[i]))
      printf("arrd[%d] = %d\n",i,arr[i]);
      
  free(arr);
  return 0;
}
