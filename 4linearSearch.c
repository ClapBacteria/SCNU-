#include <stdio.h>

void sequentialSearch1(int a[], int n, int key)
{
    int i = 0;
    printf("\n번호 %d를 검색 \n", key);

    while (i < n && a[i] != key)
        i++;

    if (i < n)
        printf("번호 %d를 %d번째에 검색 성공! \n", key, i + 1);
    else
        printf("번호 %d를 %d번째에 검색 실패! \n", key, i + 1);
}

int main()
{
    int i;
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);

    printf("프로그래머 박수균 \n학번 : 20204352 \n학과 : 컴퓨터공학과 \n");
    printf("\n순차검색(sequentialsearch) \n");

    printf("\n검색 대상 자료 \n");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n\n");

    int key;
    printf("검색할 번호를 입력하세요 : ");
    scanf("%d", &key);

    sequentialSearch1(a, size, key);

    getchar();
    getchar();

    return 0;
}
