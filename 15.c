#include <stdio.h> 
#include <conio.h> 
void shellsort(int arr[], int num) 
{ 
int i, j, k, tmp; 
for (i = num / 2; i > 0; i = i / 2) 
{ 
for(j = i; j < num; j++) 
{ 
for(k = j - i; k >= 0; k = k - i) 
{ 
if(arr[k+i] >= arr[k]) 
break; 
else 
{ 
tmp = arr[k]; 
arr[k] = arr[k+i]; 
arr[k+i] = tmp; 
} 
} 
} 
} 
} 
void main() 
{ 
int array[10]; 
int i, num; 
clrscr(); 
printf("Enter No. of elements : "); 
scanf("%d", &num); 
for (i=0; i<num; i++) 
{ 
printf("\nEnter value of Element [%d] : ",i); 
scanf("%d", &array[i]); 
}

// call shell sort array 
shellsort(array, num); 
printf("\nSorted array is: "); 
for(i=0; i<num; i++) 
printf("%d ", array[i]); 
getch();
}