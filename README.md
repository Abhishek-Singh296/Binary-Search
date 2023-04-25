# Binary-Search
Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half.Binary search algorithm applies to a sorted array for searching an element. The search starts with comparing the target element with the middle element of the array. If value matches then the position of the element is returned.

In case the target element is less than the middle element (considering the array follows an ascending order) of the array then the second half of the array is discarded and the search continues by dividing the first half.

The process is the same when the target element is greater than the middle element, only, in this case, the first half of the array is discarded before continuing with the search. The iteration repeats until a match for the target element is found.

## __Working__
The binary search algorithm works by comparing the element to be searched by the middle element of the array and based on this comparison follows the required procedure.

- Case 1 − element = middle, the element is found return the index.

- Case 2 − element > middle, search for the element in the sub-array starting from middle+1 index to n.

- Case 3 − element < middle, search for element in the sub-array starting from 0 index to middle -1.


![download](https://user-images.githubusercontent.com/113619312/234347902-e9e4a92d-3298-4e83-b9e2-664577c2c49e.png)

## __Algorithm__
Parameters inital_value , end_value
```
Step 1 : Find the middle element of array. using, middle = initial_value + end_value / 2 ;
Step 2 : If middle = element, return ‘element found’ and index.
Step 3 : if middle > element, call the function with end_value = middle - 1 .
Step 4 : if middle < element, call the function with start_value = middle + 1 .
Step 5 : exit.
```

## __Code__
```
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int BinarySearch(int a[], int search, int n)
{
    int low=0,upper=n,mid;
    while(low<=upper)
    {
    mid=(low+upper)/2;
    if(search==a[mid])
    {
                      printf("Element found at index:%d",mid);
					  return mid;
                     
    }
    if(search<a[mid])
    {
                     upper=mid-1;
    }
    else
    {
        low=mid+1;
    }
    }
   return -1;
}

int main()
{
  int ret,element;
  scanf("%d",&element);
  int arr[5]={3,5,7,33,72};
//  BubbleSort(arr,5);
  ret=BinarySearch(arr,element,5);
  if(ret==-1)
  {
   printf("Element not found!");
  }
}
```

---

## __Output__
![Screenshot 2023-04-24 021136](https://user-images.githubusercontent.com/113619312/234090181-303beba0-fb5f-46dd-89f6-9295d7ed4a0d.png)

