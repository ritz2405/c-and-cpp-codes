#include<stdio.h>

int hasElement(int item, int arr[], int n)
{
     /*
	This function returns 0 if 'item' doesn't exists in an integer array 'arr' of size 'n'
     */
     int status = 0;			// set if number present, else reset.
     for (int i = 0; i < n ; i++)
     {
          if (arr[i] == item)		// the 'item' can be present in the array 'arr' at some index of 'i'
          {
               status = 1;
               break;
          }
     }
     return status;
}

void printPairs(int arr[], int n, int expectedSum)
{
     /*
          This function does following task:
		* Find two numbers in 'arr' of size 'n' whose sum is equals to 'expectedSum'
		* Adds them into a new array 'pairs' of size 'n'
			* It checks in 'pairs' for both the numbers, if they're present, it won't add them up
		* Finally, prints the array in pair of two numbers per line
     */

     int pairs[n];
     int k = 0;

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
                if (i == j)
                {
                     continue;
                }
                if(arr[i] + arr[j] == expectedSum)
                {
                     if (!hasElement(arr[i], pairs, n))
                     {
                          pairs[k++] = arr[i];
                          pairs[k++] = arr[j];
                     }
                }
          }
     }
     if (k == 0)
          printf("-1");
     else
     {
          for (int i = 0; i < n/2; i += 2)
          {
               printf("%d %d\n", pairs[i], pairs[i+1]);
          }
     }
}

int main()
{
     int n;
     scanf("%d", &n);			// ... Enter size of array 
     int arr[n];
     for (int i = 0; i < n; i++)	// ... Enter n elements
          scanf("%d", &arr[i]);
     int expectedSum;
     scanf("%d", &expectedSum);

     printPairs(arr, n, expectedSum);
     return 0;
}