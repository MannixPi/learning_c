#include<stdio.h>

void Swap(int *a, int *b);
void InsertSort(int *array, int length);
void ShowArray(int *array, int length);

int main(void)
{
    int a[10] = { 5, 0, 2, 3, 6, 1, 9, 7, 4, 8 }; 
    printf("排序前: \n");
    ShowArray(a, 10);

    InsertSort(a, 10);
    
    printf("排序后: \n");
    ShowArray(a, 10);
    return 0;
}

// 交换两数
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 插入排序
void InsertSort(int *array, int length)
{
    int i, j;
    for (i = 1; i < length; i++) {
        for (j = 0; j < i; j++) {
            if (array[i] < array[j]) {
                Swap(&array[i], &array[j]);
            }
        }
    }        
}

// 打印数组
void ShowArray(int *array, int length)
{
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}