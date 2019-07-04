#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

void CountOff( int n, int m, int out[] )
{
    int i;
    int number = 0; // 记录报数
    int total = n;  // 剩余总人数
    int count = 1;  // 记录出队人数
    int temp[MAXN]; // 临时数组，记录淘汰状态，0为已淘汰，1为未淘汰
    for ( i = 0; i < n; i++ )
        temp[i] = 1;
    i = 0;  // 记录数组当前位置
    while ( total )
    {
        if ( temp[i] ) // 没被淘汰的人才报数
        {
            number++; // 报数
            if ( number == m ) // 报道指定数则淘汰
            {
                out[i] = count; // 表示位置 i 第 count 个被淘汰
                count++;
                temp[i] = 0; // 标记该位置为已淘汰
                number = 0;  // 下一个从头开始报数
                total--;     // 剩余人数减少一个
            }
        }
        if ( i == n )
            i = 0;
        else
            i++;
    }    
}