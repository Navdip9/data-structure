#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int array[10],size,index,i; 
clrscr(); 
printf("\nEnter array size : "); 
scanf("%d",&size); 
for(i=0;i<size;i++) 
{ 
printf("\nEnter value of elements [%d] : ",i); 
scanf("%d",&array[i]); 
} 
printf("\nEnter Index No to be Search : "); 
scanf("%d",&index); 
if(index>size) 
printf("\nWrong Index No. Entered"); 
else 
printf("\nThe Value %d at Index possition is %d", array[index], index); 
getch(); 
}