#include<stdio.h>

void Swap(int *a, int *b);
void ShowArray(int *array, int length);

void InsertSort(int *array, int length);

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

/*
 * 直接插入排序(升序):
 * 1.将待排序数组的第一个元素看做有序区，它右边看做无序区
 * 2.用无序区的第一个元素依次与有序区的所有元素进行比较，
 *   但凡小于就交换二者，比较完后有序区增加1个元素，无序区减少1个元素
 * 3.重复上述两个步骤，直到无序区元素个数为零。
 */
void InsertSort(int *array, int length)
{
    int i, j;
    // 变量i始终指向无序区第1个元素
    for (i = 1; i < length; i++)
    {
        // 变量j标记有序区的所有元素
        for (j = 0; j < i; j++)
        {
            if (array[i] < array[j])
            {
                Swap(&array[i], &array[j]);
            }
        }
    }        
}

// 打印数组
void ShowArray(int *array, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// 交换两数
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}