//Question//

//Write a C program to read Two One Dimensional Arrays of same data type (integer type) and merge them into another One Dimensional Array of same type.//

#include<stdio.h>
int main() 
{
   int arr1[20], arr2[20], array_new[40], n1, n2, size, i;
 
 
   scanf("%d", &n1); 
   
   for (i = 0; i < n1; i++)
      scanf("%d", &arr1[i]); 
 
   scanf("%d", &n2); 
   
   for (i = 0; i < n2; i++)
      scanf("%d", &arr2[i]); 
int j;
for (i=0;i<n1;++i)
array_new[i]=arr1[i];
 
size =  n1 + n2;
 
for(i=0, j=n1; j<size && i<n2; ++i, ++j)
array_new[j] = arr2[i];
//Printing after merging

for (i = 0; i < size; i++) {
      printf("%d\n", array_new[i]);
   }


return 0;
}