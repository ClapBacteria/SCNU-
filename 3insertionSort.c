#include <stdio.h>

void insertionSort(int a[], int n) 
{
    int i, j, key;
    for (i = 1; i < n; i++) 
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) 
        {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = key;

        printf("");
        for (int k = 0; k < n; k++) 
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
}
void printArray(int a[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main() 
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    printf("프로그래머 박수균 \n 학번: 20204352\n");
    printf("학과: 컴퓨터공학과\n\n삽입 정렬 (insertionsort)\n\n");

    printf("정렬 전\n");
    printArray(a, n);

    printf("\n"); 
    printf("정렬 과정\n");
    insertionSort(a, n);

    printf("\n");
    getchar ();
}
