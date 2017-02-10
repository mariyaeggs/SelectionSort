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

modify the selection sort algorithm to sort the first k smallest elements of the array (the value of k will be entered by the user). Your algorithm must run in O(nk) time.
int SelectionSortForK(int x[], int size, int k_input_size) {
   if(k_input_size > size || k_input_size < 0)
   {
      cout << "K is out of bounds.\n";
      k_input_size = size;
   }
   for(int i = 0; i < k_input_size; i++)
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
   return k_input_size;
}
void PrintArray(int x[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", x[i]);
   }
}

int main() {

   // Selection sort array input
   int selection_sort_arrA[10] = {4, 6, 8, 15, 20, 22, 10, 3, 9, 2};
   int selection_sort_arrB[10] = {4, 6, 8, 15, 20, 22, 10, 3, 9, 2};
   int user_input;

   // Selection Sort
   cout << endl;
   cout << "-------------------Selection Sort Number 1-----------------";
   cout << "\n" << "Selection sort Question 1 unsorted ";
   PrintArray(selection_sort_arrA, 10);
   SelectionSort(selection_sort_arrA, 10);
   cout << endl;

   cout << "Selection sort Question 1 sorted ";
   PrintArray(selection_sort_arrA, 10);
   cout << endl;

   // Selection Sort for K
   do{
      cout << "\nEnter an integer >= 0: ";
      cin >> user_input;
      cin.clear();
      cin.ignore(10000, '\n');

      if(user_input <= 0)
         cout << "\nInvalid input. Input again.\n";
   }
   while(user_input <= 0);

   cout << endl;
   cout << "-------------------Selection Sort for K Number 2-----------------";
   cout << "\n" << "Selection sort Question 2 unsorted ";
   PrintArray(selection_sort_arrB, 10);
   user_input = SelectionSortForK(selection_sort_arrB, 10, user_input);
   cout << endl;

   cout << "Selection sort for K Question 2 sorted ";
   PrintArray(selection_sort_arrB, user_input);
   cout << endl;
}