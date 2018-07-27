# Linear Search Algorithm for programming C
Linear search is the oldest searching algorithm. It is checking sequential one to one. So that our following code implements a linear search (Searching algorithm) which is used to find whether a given number is present in an array and if it is present then at what location it occurs.


**A simple approach is to do linear search, i.e**

1.  Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
2.  If x matches with an element, return the index.
3.  If x doesn’t match with any of elements, return -1.


### Example: 
![Example](https://cdncontribute.geeksforgeeks.org/wp-content/uploads/Linear.png)

### Output
![Binary Search Output Screenshot](http://prntscr.com/kbws8m)

## Some another algorithm using array functions and so on.

```
#include <stdio.h>
 
int main()
{
  int array[100], search, c, n;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
 
  printf("Enter %d integer(s)\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  printf("Enter a number to search\n");
  scanf("%d", &search);
 
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);
 
  return 0;
}
```

**Using Function**

```
#include <stdio.h>
 
long linear_search(long [], long, long);
 
int main()
{
   long array[100], search, c, n, position;
 
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
 
   printf("Input %d numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%ld", &array[c]);
 
   printf("Input number to search\n");
   scanf("%ld", &search);
 
   position = linear_search(array, n, search);
 
   if (position == -1)
      printf("%d isn't present in the array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
   return 0;
} 
 
long linear_search(long a[], long n, long find) {
   long c;
 
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
 
   return -1;
}
```
