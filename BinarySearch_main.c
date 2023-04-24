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
