#include <stdio.h>

void bubblesort(int a[], int n) 
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }

        for (int k = 0; k < n; k++)
        {
            printf("%d", a[k]);
        }
        printf(" \n");
    }
}

int main() 
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    
    printf("프로그래머 박수균 \n학번: 20204352 \n");
    printf("학과 : 컴퓨터공학과 \n\n버블 정렬 (bubblesort)\n\n");
    printf("정렬 전\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf(" \n\n");
    printf("정렬 과정 \n");
    bubblesort(a, n);

    printf(" \n");
    getchar();
}
