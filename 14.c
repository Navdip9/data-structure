#include <stdio.h> 
#include <conio.h> 

void display(int list[], int n) {
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", list[i]);
}

void selectionsort(int list[], int n) {
    int indexMin, i, j, temp;
    // loop through all numbers 
    for(i = 0; i < n - 1; i++) {
        // set current element as minimum 
        indexMin = i;
        // check the element to be minimum 
        for(j = i + 1; j < n; j++) {
            if(list[j] < list[indexMin])
                indexMin = j;
        }
        if(indexMin != i) {
            printf("\nItems swapped: [ %d, %d ]\n", list[i], list[indexMin]);
            // swap the numbers 
            temp = list[indexMin];
            list[indexMin] = list[i];
            list[i] = temp;
        }
        printf("\nIteration %d : ", (i + 1));
        display(list, n);
    }
}

int main() {
    int list[100], i, n;
   
    printf("\nHow many elements do you want? : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter the No [%d]: ", i + 1);
        scanf("%d", &list[i]);
    }
    selectionsort(list, n);
    printf("\n\nAfter Sorting:\n");
    for(i = 0; i < n; i++)
        printf("\t %d", list[i]);
    getch();
    return 0;
}
