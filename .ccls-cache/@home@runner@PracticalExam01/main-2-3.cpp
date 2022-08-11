#include <iostream>
#include<stdio.h>

int pallindrome(int arr[], int n) {
  //let's intialise the variables
   int i, j, flag = 0;
  //loop the flags, i, j ,k
   for(i = 0, j=n-1; i< n/2, j>=n/2; i++, j--) {
      if(arr[i]!=arr[j]) {
         flag = 1;
         break;
      }
   }
   if (flag == 1)
   return 0;
   else
   return 1;
}
int main(int argc, char const *argv[])
{
  int arr[] = {1, 0, 2, 3, 2, 2, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
   if(pallindrome(arr, n)) {
      printf("Array is pallindrome\n");
   }
   else
      printf("Array is not pallindrome\n");
   
    //let's assume the maximum array size as 100.
    //initialize sum as 0. Otherwise, it will take some garbage value.
    int arr[100], size, i, sum = 0;
    
    //Get size input from user
    printf("Enter array size\n");
    scanf("%d",&size);
    
    //Get all elements using for loop and store it in array
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    //add all elements to the variable sum.
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; // same as sum += arr[i];
    
    //print the result
    printf("Sum of the array = %d\n",sum);
    
    return 0;
}