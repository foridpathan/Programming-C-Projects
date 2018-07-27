# Binary Search Algorithm for programming C
This code implements binary search in C language. It can only be used for sorted arrays, but it's fast as compared to linear search. If you wish to use binary search on an array which isn't sorted, then you must sort it using some sorting technique say merge sort and then use the binary search algorithm to find the desired element in the list. If the element to be searched is found then its position is printed.


**We basically ignore half of the elements just after one comparison.**

1. Compare x with the middle element.
2.  If x matches with middle element, we return the mid index.
3.  Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
4.  Else (x is smaller) recur for the left half.


### Output
![Binary Search Output Screenshot](http://prntscr.com/kbwm11)