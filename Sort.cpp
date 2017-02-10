#include <iostream>
using namespace std;

#include "Sort.h"

void Sort::SelectionSort(int x[], int size) {
   for(int i = 0; i < size; i++)
   {
      int min_index = i;

      for(int j = i + 1; j < size; j++)
      {
         if(x[j] < x[min_index])
            min_index = j;
      }

      if(min_index != i)
      {
         int temp = x[min_index];
         x[min_index] = x[i];
         x[i] = temp;
      }
   }
}
void Sort::PrintArray(int x[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", x[i]);
   }
}
