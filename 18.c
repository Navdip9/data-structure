#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int array[50], first, last, middle, size, sElement, i, j, t; 
clrscr(); 
printf("Enter the size of the Array : "); 
scanf("%d",&size); 
for (i=0; i<size; i++) 
{ 
printf("Enter values of Element [%d] : ", i); 
scanf("%d",&array[i]); 
} 
// Sorting Array in acending order 
for(i=0; i<size-1; i++) 
{ 
for(j=i+1; j<size; j++) 
{ 
if(array[i] > array[j]) 
{ 
t=array[i]; 
array[i]=array[j]; 
array[j]=t; 
} 
} 
} 
printf("\nSorted Array for Searching\n"); 
for(i=0; i<size; i++) 
printf("%d \t", array[i]); 
printf("\n\nEnter No. to be search : "); 
scanf("%d", &sElement);

first= 0; 
last = size - 1; 
middle = (first+last)/2; 
while (first <= last) 
{ 
if (array[middle] < sElement) 
first = middle + 1; 
else if (array[middle] == sElement) 
{ 
} 
else 
printf("Element found at index %d \n", middle); 
break; 
last = middle - 1; 
middle = (first + last)/2; 
} 
if (first > last) 
printf("Element Not found in the Array."); 
getch(); 
} 
O