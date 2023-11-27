#include <stdio.h>

int i = 0;

void binarySearch(int a[], int begin, int end, int key) {
    int middle;
    i++;
    if (begin == end) {
        if (key == a[begin])
            printf("%d번째에서 검색 성공! \n", i);
        else
            printf("%d번째에 검색 실패! \n", i);
        return;
    }
    middle = (begin + end) / 2;
    if (key == a[middle])
        printf("%d번째에 검색 성공! \n", i);
    else if (key < a[middle] && (middle - 1 >= begin))
        binarySearch(a, begin, middle - 1, key);
    else if (key > a[middle] && (middle + 1 <= end))
        binarySearch(a, middle + 1, end, key);
    else
        printf("%d번째에 검색 실패! \n", i);
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, size = sizeof(a) / sizeof(a[0]);
    int key;

    printf("프로그래머 박수균\n학번: 20204352\n학과: 컴퓨터공학과\n");
    printf("\n이진 검색(Binary Search)\n");

    printf("\n검색 대상 자료\n");
    for (i = 0; i < size; i++)
        printf("%d, ", a[i]);

    printf("\n\n검색할 키를 입력하세요: ");
    scanf("%d", &key);
    printf("\n%d를 검색\n", key);

    binarySearch(a, 0, size - 1, key);

    getchar();
    getchar();
}
