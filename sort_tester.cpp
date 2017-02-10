//----- sort_tester.cpp -----
#include <iostream>
#include <vector>
using namespace std;

/**
 * Title: Lab 3 Submission : Queue Text String
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/22/2017
 *
 * This is a driver program to test the queue class for a
 * a program that reads a document containing endnotes,
 * Sample.txt, collects them in a queue, and prints
 * them on the screen.
 *
 * @author Mariya Eggensperger
*/

void SelectionSort(int x[], int size);
int SelectionSortForK(int x[], int size, int k_input_size);
double is_median(int x[], int size);
void PrintArray(int x[], int size);

int main() {

   // Selection sort array(s)
   int selection_sort_arrA[10] = {4, 6, 8, 15, 20, 22, 10, 3, 9, 2};
   int selection_sort_arrB[10] = {4, 6, 8, 15, 20, 22, 10, 3, 9, 2};
   int user_input;
   double get_median;

   // Selection sort function
   cout << endl;
   cout << "-------------------Selection Sort Number 1-----------------";
   cout << "\n" << "Selection sort Question 1 unsorted ";
   PrintArray(selection_sort_arrA, 10);
   SelectionSort(selection_sort_arrA, 10);
   cout << endl;

   cout << "Selection sort Question 1 sorted ";
   PrintArray(selection_sort_arrA, 10);
   cout << endl;

   // Selection sort for K function
   do{
      cout << "\nEnter an integer >= 0: ";
      cin >> user_input;
      cin.clear();
      cin.ignore(1000, '\n');

      if(user_input <= 0)
         cout << "\nInvalid input. Input again.\n";
   }
   while(user_input <= 0);

   // Driver
   cout << endl;
   cout << "-------------------Selection Sort for K Number 2-----------------";
   cout << "\n" << "Selection sort Question 2 unsorted ";
   PrintArray(selection_sort_arrB, 10);
   user_input = SelectionSortForK(selection_sort_arrB, 10, user_input);
   get_median = is_median(selection_sort_arrB, user_input);
   cout << endl;

   cout << "Selection sort for K Question 2 sorted ";
   PrintArray(selection_sort_arrB, user_input);
   cout << endl;
   cout << "\n------------------------Median Number 3-------------------------";
   cout << endl;
   cout << "With respect to: ";
   PrintArray(selection_sort_arrB, user_input);
   cout << endl;
   cout << "The median of this input array is: ";
   cout <<get_median;
   cout << endl;
   return 0;

}
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
double is_median(int x[], int size)
{
   // If even
   if(size % 2 == 0) {
      double is_median = (x[size/2] + x[(size/2)-1])/2.0;
      return is_median;
   }
   double is_median = size % 2 ? x[size / 2] : (x[size / 2 - 1] + x[size / 2]) / 2;
   return is_median;
}
void PrintArray(int x[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", x[i]);
   }
}

