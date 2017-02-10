#include <iostream>
using namespace std;

#include "Sort.h"

void SelectionSort(int x[], int size) {
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

void PrintArray(int x[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", x[i]);
   }
}

int main() {

   // Selection sort array input
   int selection_sort_arr[10] = {4, 6, 8, 15, 20, 22, 10, 3, 9, 2};

   // Selection Sort
   cout << endl;
   cout << "-------------------Selection Sort Number 1-----------------";
   cout << "\n" << "Selection sort Question 1 unsorted ";
   PrintArray(selection_sort_arr, 10);
   SelectionSort(selection_sort_arr, 10);
   cout << endl;

   cout << "Selection sort Question 1 sorted ";
   PrintArray(selection_sort_arr, 10);
   cout << endl;
}