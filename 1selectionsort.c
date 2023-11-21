#include <stdio.h>

void selectionsort(int a[], int n) 
{
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) 
    {
        min = i;

        for (j = i + 1; j < n; j++) 
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;

        for (j = 0; j < n; j++) 
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}
int main() 
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    printf("프로그래머 박수균\n학번: 20204352\n");
    printf("학과: 컴퓨터공학과\n\n선택 정렬 (selectionsort)\n\n");

    printf("정렬전\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    
    printf("정렬과정\n");
    selectionsort(a, n);
    printf("\n");

    getchar();
}

