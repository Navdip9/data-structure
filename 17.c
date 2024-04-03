#include <stdio.h> 
#include <conio.h> 
void main() 
{ 
int array[50], search, size, i; 
clrscr(); 
printf("Enter No. of Elements in Array : "); 
scanf("%d",&size); 
for (i=0; i<size; i++) 
{ 
printf("Enter value of Element [%d] : ", i); 
scanf("%d", &array[i]); 
} 
printf("\nEnter No. to Search : "); 
scanf("%d", &search); 
for (i=0; i<size; i++) 
{ 
if (array[i] == search) /* if required element found */ 
{ 
printf("Search No. %d is present at location %d \n", search, i+1); 
break; 
} 
} 
if (i == size) 
printf("Search No. %d is not present in Array.\n", search); 
getch(); 
}